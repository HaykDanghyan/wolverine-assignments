#include <iostream>
#include <vector>
int main() {
    std::vector<int> vec(3);
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << "Enter the #" << i + 1 << " number : "; 
        std::cin >> vec[i];
    }
    int average = 0;
    std::cout << "The initial array : ";
    for (const auto& elem : vec) {
        std::cout << elem << "  ";
        average += elem;
    }
    std::cout << "\nThe average of the array is : " << average / vec.size() << std::endl;
    return 0;  
}