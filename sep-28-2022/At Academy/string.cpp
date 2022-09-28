#include <iostream>
#include <string>

std::string change_upper_to_lower(const std::string& str) {
    std::string res{};
    for (const auto& ch : str) {
        if (islower(ch)) {
            res += toupper(ch);
        } 
        if (isupper(ch)) {
            res += tolower(ch);
        }
    }
    return res;
} 

int main() {
    std::cout << change_upper_to_lower("hAyK") << std::endl;
}