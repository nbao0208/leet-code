#include <iostream>
#include<vector>
#include<string>

using namespace std;

int lengthOfLastWord(const string &s) {
    int lengthWord = 0;
    int index = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            index = i;
            break;
        }
    }
    for (int i = index; i >= 0; i--) {
        if (s[i] != ' ') {
            lengthWord++;
        } else {
            break;
        }
    }
    return lengthWord;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
