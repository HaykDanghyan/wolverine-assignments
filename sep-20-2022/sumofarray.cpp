#include <iostream>
#include <vector>

const int size = 10;

int main() {
    srand(time(NULL));
    long sum = 0;
    std::vector<long> arr;
    for (int i = 0; i < size; ++i) {
        arr.push_back(1 + rand() % 10);
    } 
    std::cout << "The initial array : ";
    for (const auto& elem : arr) {
        std::cout << elem << "  ";
        sum += elem;
    }
    std::cout << std::endl;
    std::cout << "Sum of the array : " << sum << std::endl;
    return 0;
}