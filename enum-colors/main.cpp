#include <iostream>
#include <map>

enum class Colors {
    RED = 1, GREEN, BLUE,
    WHITE, BLACK, YELLOW,
    CYAN, MAGENTA, ORANGE
};

std::map<Colors, std::string> get_colors_map() {
    std::map<Colors, std::string> mmap;
    mmap[Colors::RED] = "red";
    mmap[Colors::GREEN] = "green";
    mmap[Colors::BLUE] = "blue";
    mmap[Colors::WHITE] = "white";
    mmap[Colors::BLACK] = "black";
    mmap[Colors::YELLOW] = "yellow";
    mmap[Colors::CYAN] = "cyan";
    mmap[Colors::MAGENTA] = "magenta";
    mmap[Colors::ORANGE] = "orange";
    return mmap;
}

std::string to_string(const Colors& color) {
    for (const auto& el : get_colors_map()) {
        if (el.first == color) {
            return el.second;
        }
    }
    return "Not found";
}

Colors to_enum(const std::string& color) {
    for (const auto& el : get_colors_map()) {
        if (el.second == color) {
            return el.first;
        }
    }
    return (Colors)std::string::npos;
}

int main() {
    std::cout << to_string(Colors::CYAN) << std::endl;
    std::cout << static_cast<int>(to_enum("green")) << std::endl;
    return 0;
}