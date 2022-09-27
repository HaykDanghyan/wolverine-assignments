#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"

void rtrim(std::string& str) {
	for (int i = str.length() - 1; i >= 0; --i) {
		if (str[i] == ' ') {
			str.erase(str.begin() + i);
		}	
	}
}

int main() {
	std::string str = "hello        ";
	rtrim(str);
	std::cout << str << "a";
	return 0;
}
