#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//
//bool isPalindrome(int x) {
//    if (x < 0) {
//        return false;
//    }
//    string temp = to_string(x);
//    reverse(temp.begin(), temp.end());
//    if (stol(temp) == x) {
//        return true;
//    }
//    return false;
//}
bool isPalindrome(int x) {
    if ((x < 0 || x % 10 == 0) && x != 0) {
        return false;
    } else if (x == 0) {
        return true;
    }
    string temp = to_string(x);
    for (int i = 0; i <= temp.size() / 2; i++) {
        if (temp[i] != temp[temp.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
