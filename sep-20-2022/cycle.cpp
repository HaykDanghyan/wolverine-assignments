#include <iostream>

int main() {
    int x = 0;
    std::cout << "Enter a value : ";
    std::cin >> x;
    int temp = 0;
    cycle:
    if (temp <= x) {
        std::cout << temp++ << "  ";
        goto cycle;
    }
    std::cout << std::endl;
    return 0;
}