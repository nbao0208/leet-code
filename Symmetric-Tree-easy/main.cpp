#include <iostream>
#include<vector>
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

vector<vector<int>> value_BFS(TreeNode *root) {
    queue<TreeNode *> level;
    vector<vector<int>> myLevel;
    myLevel.push_back({root->val});
    level.push(root);
    while (!level.empty()) {
        int size = level.size();
        vector<int> temp;
        for (int i = 0; i < size; i++) {
            if (level.front()->left != nullptr) {
                level.push(level.front()->left);
                temp.push_back(level.front()->left->val);
            } else {
                temp.push_back(0);
            }
            if (level.front()->right != nullptr) {
                level.push(level.front()->right);
                temp.push_back(level.front()->right->val);
            } else {
                temp.push_back(0);
            }
            level.pop();
        }
        myLevel.push_back(temp);
    }
    return myLevel;
}

bool isSymmetric(TreeNode *root) {
    vector<vector<int>> level = value_BFS(root);
    for (int i = 1; i < level.size(); i++) {
        if (level[i].size() % 2 != 0) {
            return false;
        }
        for (int j = 0; j <= 0.5 * level[i].size() - 0.5; j++) {
            if (level[i][j] != level[i][level[i].size() - j - 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
