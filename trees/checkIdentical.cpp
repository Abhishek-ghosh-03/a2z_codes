#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr || q == nullptr) return false;

        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

// Helper function to create a new TreeNode
TreeNode* newNode(int val) {
    return new TreeNode(val);
}

// Main function to test if two trees are the same
int main() {
    // Create two binary trees
    // Tree 1:
    //       1
    //      / \
    //     2   3
    TreeNode* tree1 = newNode(1);
    tree1->left = newNode(2);
    tree1->right = newNode(3);
    
    // Tree 2:
    //       1
    //      / \
    //     2   3
    TreeNode* tree2 = newNode(1);
    tree2->left = newNode(2);
    tree2->right = newNode(3);
    
    // Create an instance of Solution and check if the two trees are the same
    Solution solution;
    bool result = solution.isSameTree(tree1, tree2);
    
    // Print the result
    if (result) {
        cout << "The trees are the same." << endl;
    } else {
        cout << "The trees are not the same." << endl;
    }
    
    return 0;
}

