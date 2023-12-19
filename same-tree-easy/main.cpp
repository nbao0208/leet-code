#include <iostream>
#include<vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void addPreOrderTraversal(TreeNode *root, vector<int> &value) {
    if (root != nullptr) {
        value.push_back(root->val);
        addPreOrderTraversal(root->left, value);
        addPreOrderTraversal(root->right, value);
    } else {
        value.push_back(0);
        return;
    }
}

bool isSameTree(TreeNode *p, TreeNode *q) {
    vector<int> value_NLR_P;
    vector<int> value_NLR_Q;
    addPreOrderTraversal(p, value_NLR_P);
    addPreOrderTraversal(q, value_NLR_Q);
    if (value_NLR_P.size() != value_NLR_Q.size()) {
        return false;
    }
    for (int i = 0; i < value_NLR_Q.size(); i++) {
        if (value_NLR_Q[i] != value_NLR_P[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
