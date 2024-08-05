#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* constructBinaryTree(vector<int>& nodes) {
    if (nodes.empty()) return nullptr;

    // Create the root node from the first element of the array
    TreeNode* root = new TreeNode(nodes[0]);
    
    // Use a queue to manage the nodes as we create them
    queue<TreeNode*> q;
    q.push(root);

    int i = 1; // Index in the nodes vector
    while (i < nodes.size()) {
        TreeNode* current = q.front();
        q.pop();

        // Assign left child
        if (i < nodes.size()) {
            current->left = new TreeNode(nodes[i++]);
            q.push(current->left);
        }

        // Assign right child
        if (i < nodes.size()) {
            current->right = new TreeNode(nodes[i++]);
            q.push(current->right);
        }
    }

    return root;
}

// Function to perform inorder traversal
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

// Function to perform preorder traversal
void preorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Function to perform postorder traversal
void postorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " ";
}

// Function to print the tree in level order for verification
void printLevelOrder(TreeNode* root) {
    if (root == nullptr) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        cout << current->val << " ";

        if (current->left != nullptr) q.push(current->left);
        if (current->right != nullptr) q.push(current->right);
    }
}

int main() {
    vector<int> nodes = {1, 2, 3, 4, 5, 6, 7};
    TreeNode* root = constructBinaryTree(nodes);

    cout << "Level order traversal of the constructed binary tree: ";
    printLevelOrder(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}

