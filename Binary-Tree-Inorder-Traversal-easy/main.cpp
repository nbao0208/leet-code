#include <iostream>
#include<vector>
#include<stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void addVectorInorderTraversal(TreeNode *root, vector<int> &value) {
    if (root != nullptr) {
        addVectorInorderTraversal(root->left, value);
        value.push_back(root->val);
        addVectorInorderTraversal(root->right, value);
    }
}

vector<int> inorderTraversal(TreeNode *root) {
    vector<int> result;
    addVectorInorderTraversal(root, result);
    return result;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
