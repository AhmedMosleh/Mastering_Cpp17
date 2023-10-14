#include <iostream>
#include <filesystem>
#include <vector>

namespace fs = std::filesystem;

int main() {
    // Specify the directory path you want to list files from
    std::string directory_path = "./users/";

    // Create a vector to store the file names
    std::vector<std::string> file_names;

    try {
        // Iterate over the files in the specified directory
        for (const auto& entry : fs::directory_iterator(directory_path)) {
            if (entry.is_regular_file()) {
                // Add the file name to the vector
                file_names.push_back(entry.path().filename().string());
            }
        }
    } catch (const fs::filesystem_error& ex) {
        std::cerr << "Filesystem error: " << ex.what() << std::endl;
        return 1;
    }

    // Print the file names
    for (const std::string& file_name : file_names) {
        std::cout << file_name << std::endl;
    }

    return 0;
}
