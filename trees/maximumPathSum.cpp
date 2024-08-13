#include <iostream>
#include <climits>

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
    int maximumPathSum(TreeNode* root, int& maxi) {
        if (root == nullptr) return 0;

        int left_path = max(0, maximumPathSum(root->left, maxi));
        int right_path = max(0, maximumPathSum(root->right, maxi));
        maxi = max(maxi, left_path + right_path + root->val);

        return max(left_path, right_path) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maximumPathSum(root, maxi);
        return maxi;
    }
};

// Helper function to create a new TreeNode
TreeNode* newNode(int val) {
    return new TreeNode(val);
}

// Main function to test the maximum path sum
int main() {
    // Create a binary tree
    // Example tree:
    //       -10
    //       /  \
    //      9   20
    //         /  \
    //        15   7
    TreeNode* root = newNode(-10);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(7);

    // Create an instance of Solution and get the maximum path sum
    Solution solution;
    int result = solution.maxPathSum(root);

    // Print the result
    cout << "Maximum Path Sum: " << result << endl;

    return 0;
}

