#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int findMinStringSize(vector<string> myString) {
    int min = 0;
    for (int i = 1; i < myString.size(); i++) {
        if ((myString[i]).size() < (myString[min]).size()) {
            min = i;
        }
    }
    return (myString[min]).size();
}

string longestCommonPrefix(vector<string> &strs) {
    string prefix = "";
    if(strs.size()==1){
        return strs[0];
    }
    for (int i = 0; i < strs.size(); i++) {
        for (int j = 0; j < strs.size(); j++) {

        }
        if((strs[i]).substr(0,i+1)!=(strs[i+1]).substr(0,i+1)){
            return prefix;
        }else{
            prefix = (strs[i]).substr(0,i+1);
        }
    }
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs);
    return 0;
}
