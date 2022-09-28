#include <iostream>
#include <string>

size_t last_index_of(const std::string& str, const std::string& substr) {
    size_t index = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (str.substr(i, substr.length()) == substr) {
            index = i;
        }
    }
    if (index >= 0) {
        return index;
    }
    return std::string::npos;
}

int main() {
    std::cout << last_index_of("hello a", "a") << std::endl;
    return 0;
}