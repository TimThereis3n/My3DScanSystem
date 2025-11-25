#include <iostream>
#include <filesystem>
#include <vector>
#include <string>
#include <algorithm>
#include <opencv2/opencv.hpp>

namespace fs = std::filesystem;

/* 列出文件夹下的所有普通文件 */
std::vector<fs::path> listFiles(const fs::path& folder)
{
    std::vector<fs::path> files;
    for (auto& p : fs::directory_iterator(folder))
        if (p.is_regular_file())
            files.push_back(p.path());

    std::sort(files.begin(), files.end());
    return files;
}

/* 加载 stands 模板文件名 */
std::vector<std::string> loadStands(const fs::path& folder)
{
    std::vector<std::string> names;
    for (auto& p : fs::directory_iterator(folder))
        if (p.is_regular_file())
            names.push_back(p.path().filename().string());

    std::sort(names.begin(), names.end());
    return names;
}

/* 创建结构化分类目录 */
void createFolders(const fs::path& root)
{
    fs::create_directories(root / "horizontal_folder" / "gray");
    fs::create_directories(root / "vertical_folder" / "gray");
    fs::create_directories(root / "horizontal_folder");
    fs::create_directories(root / "vertical_folder");
}

/* 重命名 */
void renameWithStands(const fs::path& folder, const std::vector<std::string>& stands)
{
    auto files = listFiles(folder);
    size_t N = std::min(files.size(), stands.size());

    std::cout << "  Renaming " << N << " files...\n";

    for (size_t i = 0; i < N; i++)
    {
        fs::path old_path = files[i];
        fs::path templ = stands[i];

        std::string newName = templ.stem().string() + ".bmp";
        fs::path new_path = folder / newName;

        if (old_path != new_path)
        {
            try {
                if (fs::exists(new_path)) {
                    std::cout << "  [Skip] Target exists: " << new_path << "\n";
                    continue;
                }
                fs::rename(old_path, new_path);
            }
            catch (const fs::filesystem_error& e) {
                std::cout << "  [Rename Error] " << e.what() << "\n";
                std::cout << "      From: " << old_path << "\n";
                std::cout << "      To:   " << new_path << "\n";
            }
        }

    }
}

/* 分拣文件 */
void sortFiles(const fs::path& folder)
{
    auto files = listFiles(folder);

    std::cout << "  Sorting files...\n";

    for (auto& p : files)
    {
        std::string name = p.filename().string();

        size_t p1 = name.find('_');
        size_t p2 = name.find('_', p1 + 1);

        if (p1 == std::string::npos || p2 == std::string::npos)
        {
            std::cout << "    [Skip] " << name << "\n";
            continue;
        }

        std::string prefix = name.substr(0, p1);               // gray / sin
        std::string hv = name.substr(p1 + 1, p2 - p1 - 1);     // h / v

        fs::path dst;

        if (hv == "h")
        {
            if (prefix == "gray") dst = folder / "horizontal_folder" / "gray";
            else if (prefix == "sin") dst = folder / "horizontal_folder";
        }
        else if (hv == "v")
        {
            if (prefix == "gray") dst = folder / "vertical_folder" / "gray";
            else if (prefix == "sin") dst = folder / "vertical_folder";
        }
        else
        {
            std::cout << "    [Skip] " << name << "\n";
            continue;
        }

        try {
            fs::path target = dst / name;

            if (fs::exists(target)) {
                std::cout << "  [Skip] Target exists: " << target << "\n";
                continue;
            }

            fs::rename(p, target);
        }
        catch (const fs::filesystem_error& e) {
            std::cout << "  [Move Error] " << e.what() << "\n";
            std::cout << "      File: " << p << "\n";
        }

        std::cout << "    moved: " << name << "\n";
    }
}

/* 处理单个子目录 */
void processFolder(const fs::path& folder, const std::vector<std::string>& stands)
{
    std::cout << "\n===== Processing: " << folder.string() << " =====\n";

    renameWithStands(folder, stands);
    createFolders(folder);
    sortFiles(folder);
}

int main()
{
    // 保持与你 MATLAB 一致
    fs::path root_root = u8"D:/measure/new/usingforsave/dataset/test";
    fs::path stands_path = u8"D:/measure/new/usingforsave/tripleDephase";

    // 读取 stands 模板
    auto stands = loadStands(stands_path);
    if (stands.empty())
    {
        std::cout << "ERROR: stands folder is empty!\n";
        return -1;
    }

    // 遍历子文件夹
    for (auto& p : fs::directory_iterator(root_root))
    {
        if (p.is_directory())
        {
            std::string name = p.path().filename().string();
            if (name == "." || name == "..") continue;

            processFolder(p.path(), stands);
        }
    }

    std::cout << "\nAll done.\n";
    return 0;
}
