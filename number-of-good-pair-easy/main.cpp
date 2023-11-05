#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int combinationOfTwo(int number) {
    0.5 * number * (number - 1);
}

//void addEle(vector<int> &num) {
//    for (int i = 0; i < i + 1; i++) {
//        cout << "Write the element in " << i + 1 << ": ";
//        int temp;
//        cin >> temp;
//        num.push_back(temp);
//        char ans;
//        cout << "Do you want to try again: ";
//        cin >> ans;
//        if (ans == 'n') {
//            break;
//        }
//    }
//}

int main() {
    vector<int> nums;
//    addEle(nums);

    sort(nums.begin(), nums.end());
    nums.push_back(NULL);
    vector<int> indexOfTheLastSimilarElement;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] != nums[i + 1]) {
            indexOfTheLastSimilarElement.push_back(i + 1);
        }
    }
    int count = 0;
    if (nums.size() > 1) {
        for (int i = 0; i < indexOfTheLastSimilarElement.size(); i++) {
            if (i == 0) {
                count += combinationOfTwo(indexOfTheLastSimilarElement[i]);
            } else {
                if (indexOfTheLastSimilarElement[i] - indexOfTheLastSimilarElement[i - 1] >= 2) {
                    count += combinationOfTwo((indexOfTheLastSimilarElement[i] - indexOfTheLastSimilarElement[i - 1]));
                }
            }
        }
    }
    cout << count;

    return 0;
}
