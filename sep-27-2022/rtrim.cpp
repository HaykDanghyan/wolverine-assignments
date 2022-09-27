#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"

void rtrim(std::string& str) {
	int count = 0;
	for (int i = str.length() - 1; i >= 0; --i) {
		if (str[i] == ' ') {
			++count;
		} else {
			break;
		}
	}	
	int tmp = str.length() - count;
	str.erase(tmp, count);
}

int main() {
	std::string str = "hello                    bajd                                         ";
	rtrim(str);
	std::cout << str << "a" << std::endl;
	return 0;
}
