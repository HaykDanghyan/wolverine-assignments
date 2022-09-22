#include <iostream>

int main() {
    int num1 = 0;
    int num2 = 0;
    std::cout << "Enter the first number : ";
    std::cin >> num1;
    std::cout << "Enter the second number : ";
    std::cin >> num2;
    if (num1 < num2) {
        std::cout << "Max = " << num2 << std::endl;
    } else {
        std::cout << "Max = " << num1 << std::endl;
    }
    return 0;
}