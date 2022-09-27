#include <iostream>
#include <string>

std::string replaceAll(const std::string& src, const std::string& part, const std::string& exp) {
    std::string res{};
    for (int i = 0; i < src.length(); ++i) {
        while (part.find(src[i]) != -1) {
            res += exp;
            ++i;
        } 
        res += src[i];
    }
    return res;
}

int main() {
    std::cout << replaceAll("lhlello world", "l", "ch") << std::endl;
    return 0;
}