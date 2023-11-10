#include <iostream>
#include <string>

using namespace std;

int changeTheRomanCharacter(char romanChar) {
    if (romanChar == 'I') {
        return 1;
    } else if (romanChar == 'V') {
        return 5;
    } else if (romanChar == 'X') {
        return 10;
    } else if (romanChar == 'L') {
        return 50;
    } else if (romanChar == 'C') {
        return 100;
    } else if (romanChar == 'D') {
        return 500;
    }
    return 1000;
}

int romanToInt(string s) {
    int toInt = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == 'I') {
            if (s[i + 1] == 'V' || s[i + 1] == 'X') {
                toInt += -1;
            } else {
                toInt += changeTheRomanCharacter(s[i]);
            }
        } else if (s[i] == 'X') {
            if (s[i + 1] == 'L' || s[i + 1] == 'C') {
                toInt += -10;
            } else {
                toInt += changeTheRomanCharacter(s[i]);
            }
        } else if (s[i] == 'C') {
            if (s[i + 1] == 'D' || s[i + 1] == 'M') {
                toInt += -100;
            } else {
                toInt += changeTheRomanCharacter(s[i]);
            }
        } else {
            toInt += changeTheRomanCharacter(s[i]);
        }
    }
    toInt += changeTheRomanCharacter(s[s.size() - 1]);
    return toInt;
}

int main() {
    string s;
    getline(cin, s);
    cout << romanToInt(s);
    return 0;
}
