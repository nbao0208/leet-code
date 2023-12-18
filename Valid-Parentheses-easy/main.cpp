#include <iostream>
#include<string>
#include<map>

using namespace std;

bool operator==(const pair<char, char> &p1, const pair<char, char> &p2) {
    if (p1.first == p2.first && p1.second == p2.second) {
        return true;
    }
    return false;
}

bool isFirst(const char &c, const map<char, char> &myMap) {
    for (auto i: myMap) {
        if (c == i.first) {
            return true;
        }
    }
    return false;
}

bool isValid(string s) {
    map<char, char> rule;
    rule.insert(pair<char, char>('(', ')'));
    rule.insert(pair<char, char>('[', ']'));
    rule.insert(pair<char, char>('{', '}'));

    while (s.size() > 1) {
        pair<char, char> temp;
        int countTemp = 0;
        for (auto &i: rule) {
            if (s[0] == i.first) {
                temp = i;
                countTemp++;
                break;
            }
        }
        if (countTemp == 0) {
            return false;
        }
        for (auto &i: rule) {
            if (!(i == temp)) {
                if (s[1] == i.second) {
                    return false;
                }
            }
        }

        int count = 0;
        for (int i = s.size()-1; i >= 1; i--) {
            if (isFirst(s[s.size()-i], rule)) {
                for (auto j: rule) {
                    if (s[i] != j.first) {
                        if (s[i + 1] == j.second) {
                            return false;
                        }
                    }
                }
            }
            if (s[i] == temp.second) {
                if((i-1)%2!=0){
                    return false;
                }
                s.erase(i, 1);
                s.erase(0, 1);
                count++;
                break;
            }
        }
        if (count == 0) {
            return false;
        }

    }
    if (s.size() == 1) {
        return false;
    }
    return true;

}

int main() {

    return 0;
}
