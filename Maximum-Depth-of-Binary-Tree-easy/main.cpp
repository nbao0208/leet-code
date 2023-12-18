#include <iostream>
#include<queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


int maxDepth(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }
    int myMaxDepth = 0;
    queue<TreeNode *> level;
    vector<vector<int>> theTreeLevel;
    level.push(root);
    while (!level.empty()) {
        int size = level.size();
        for (int i = 0; i < size; i++) {
            if (level.front()->left != nullptr) {
                level.push(level.front()->left);
            }
            if (level.front()->right != nullptr) {
                level.push(level.front()->right);
            }
            level.pop();
        }
        myMaxDepth++;
    }
    return myMaxDepth;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
