#include <iostream>
#include <vector>
#include <queue>

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> nums;
        if (root == nullptr) return nums;
        
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        bool leftNode = true;
        
        while (!nodesQueue.empty()) {
            int size = nodesQueue.size();
            vector<int> row(size);
            
            for (int i = 0; i < size; i++) {
                TreeNode* node = nodesQueue.front();
                nodesQueue.pop();
                
                int index = leftNode ? i : (size - 1 - i);  // Corrected index calculation
                row[index] = node->val;
                
                if (node->left != nullptr) nodesQueue.push(node->left);
                if (node->right != nullptr) nodesQueue.push(node->right);
            }
            
            leftNode = !leftNode;  // Toggle direction for the next level
            nums.push_back(row);
        }
        
        return nums;
    }
};

// Helper function to create a new TreeNode
TreeNode* newNode(int val) {
    return new TreeNode(val);
}

// Main function to test the zigzag level order traversal
int main() {
    // Create the binary tree
    // Example tree:
    //       3
    //      / \
    //     9  20
    //       /  \
    //      15   7
    TreeNode* root = newNode(3);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(7);
    
    // Create an instance of Solution and get the zigzag level order traversal
    Solution solution;
    vector<vector<int>> result = solution.zigzagLevelOrder(root);
    
    // Print the result
    cout << "Zigzag Level Order Traversal:" << endl;
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}

