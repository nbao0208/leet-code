#include <iostream>
#include<vector>

using namespace std;
//Solve 1: Don't know why this is faster than the other one
//int removeDuplicates(vector<int>& nums) {
//    if(nums.size()==1){
//        return 1;
//    }
//    vector<int> temp;
//    int count = 0;
//    for(int i = 0;i<=nums.size()-2;i++){
//        if(nums[i]!=nums[i+1]){
//            count++;
//            temp.push_back(nums[i]);
//        }
//    }
//    temp.push_back(nums[nums.size()-1]);
//    nums.clear();
//    for(int i = 0;i<count+1;i++){
//        nums.push_back(temp[i]);
//    }
//    return count+1;
//}

//Solve 2
int removeDuplicates(vector<int> &nums) {
    if (nums.size() == 1) {
        return 1;
    }
    int index = 0;
    while (index < nums.size() - 1) {
        if (nums[index] == nums[index + 1]) {
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
