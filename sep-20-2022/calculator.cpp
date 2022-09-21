#include <iostream>
#include <map>

double add(double num1, double num2) {
    return num1 + num2;
}

double sub(double num1, double num2) {
    return num1 - num2;
}

double mul(double num1, double num2) {
    return num1 * num2;
}

double div(double num1, double num2) {
    return num1 / num2;
}

int main() {
    std::map<char, double(*)(double, double)> calculator;
    double num1 = 0;
    double num2 = 0;
    char symbol = 0;
    std::cout << "Enter the first number : ";
    std::cin >> num1;
    std::cout << "Enter the second number : ";
    std::cin >> num2;
    do {
        std::cout << "Enter the math operation [*]\b\b";
        std::cin >> symbol;
    }   
    while(symbol != '+' && symbol != '-' && symbol != '/' && symbol != '*'); 
    
    calculator['+'] = add;
    calculator['-'] = sub;
    calculator['*'] = mul;
    calculator['/'] = div;

    std::cout << num1 << " " << symbol << " " << num2 << " = " << calculator[symbol](num1, num2) << std::endl;
    return 0;    
}