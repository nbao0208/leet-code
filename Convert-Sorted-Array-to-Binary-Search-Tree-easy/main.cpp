#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void addTree(TreeNode *&root, int val) {
    if (root == nullptr) {
        root = new TreeNode(val);
        return;
    }
    if (val > root->val) {
        addTree(root->right, val);
    } else {
        addTree(root->left, val);
    }
}

void printTree(TreeNode *root) {
    if (root != nullptr) {
        printTree(root->left);
        cout << root->val;
        printTree(root->right);
    }
}

bool isInt(float n) {
    return n = (int) (n);
}

vector<vector<int>> halfOfVector(const vector<int> &vec, const int middle) {
    vector<vector<int>> result;
    vector<int> behind;
    vector<int> front;
    for (int i = 0; i < vec.size(); i++) {
        if (i < middle) {
            behind.push_back(vec[i]);
        } else if (i > middle) {
            front.push_back(vec[i]);
        }
    }
    result.push_back(behind);
    result.push_back(front);
    return result;
}

void helpFunc(const vector<int> &nums, TreeNode *&tree) {
    if (nums.size() == 1) {
        addTree(tree, nums[0]);
        return;
    }
    int middle = int(nums.size()) / 2;
    if (middle == 0) {
        return;
    }
    addTree(tree, nums[middle]);
    vector<vector<int>> halfVec = halfOfVector(nums, middle);
    helpFunc(halfVec[0], tree);
    helpFunc(halfVec[1], tree);
}

TreeNode *sortedArrayToBST(vector<int> &nums) {
    TreeNode *result = nullptr;
    helpFunc(nums, result);
    return result;
}

int main() {
    vector<int> val = {0, 1, 2, 3, 4, 5};
    TreeNode *root = sortedArrayToBST(val);
    printTree(root);

    return 0;
}
