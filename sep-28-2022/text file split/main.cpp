#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> split(const std::string&, const std::string&);

int main() {
    std::fstream file;
    std::string path{};
    std::cout << "Enter the file path : ";
    std::cin >> path;
    file.open(path);
    std::fstream new_file;
    new_file.open(path + ".splitted", std::ios::in | std::ios::out | std::ios::app);
    while (!file.eof()) {
        std::string line;
        std::getline(file, line);
        auto res = split(line, ", ");
        for (const auto& str : res) {
            new_file << str << "\n";
        }
    }
    return 0;
}

std::vector<std::string> split(const std::string& str, const std::string& delimiter = ", ") {
    std::vector<std::string> res;
    std::string token{};
    int i = 0;
    bool flag = false;
    while (i < str.length()) {
        if (delimiter.find(str[i]) != -1) {
            ++i;
            flag = true;
        }
        if (flag) {
            res.push_back(token);
            token.clear();
            flag = false;
        }
        token += str[i];
        ++i;
    }
    res.push_back(token);
    return res;
}
