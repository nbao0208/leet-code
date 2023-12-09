#include <iostream>
#include<vector>

using namespace std;

int removeElement(vector<int> &nums, int val) {
    int index = 0;
    while (index < nums.size()) {
        if (nums[index] == val) {
            nums.erase(nums.begin() + index);
        } else {
            index++;
        }
    }
    return nums.size();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
