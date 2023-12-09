#include <iostream>
#include<string>

using namespace std;

int strStr(string haystack, string needle) {
    if (needle.size() > haystack.size()) {
        return -1;
    }
    for (int i = 0; i <= haystack.size() - needle.size(); i++) {
        if (haystack[i] == needle[0]) {
            if (haystack.substr(i, needle.size()) == needle) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
