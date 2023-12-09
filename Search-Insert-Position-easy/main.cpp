#include <iostream>
#include<vector>

using namespace std;

int searchInsert(vector<int> &nums, int target) {
    int size = nums.size();
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            return i;
        }
        if (target - nums[i] < 0) {
            nums.insert(nums.begin() + i, target);
            return i;
        }
    }
    nums.push_back(target);
    return size;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
