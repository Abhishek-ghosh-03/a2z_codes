#include <iostream>
#include <queue>
using namespace std;

// Tree node structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        val = value;
        left = right = nullptr;
    }
};

// Function to insert nodes in level order
TreeNode* insertLevelOrder(int arr[], int n) {
    if (n == 0) return nullptr;

    // Create the root of the tree
    TreeNode* root = new TreeNode(arr[0]);

    // Queue to hold nodes and insert children
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (i < n) {
        // Dequeue the front node
        TreeNode* current = q.front();
        q.pop();

        // Insert the left child
        if (i < n) {
            current->left = new TreeNode(arr[i]);
            q.push(current->left);
            i++;
        }

        // Insert the right child
        if (i < n) {
            current->right = new TreeNode(arr[i]);
            q.push(current->right);
            i++;
        }
    }

    return root;
}

// Function for in-order traversal of the tree
void inOrder(TreeNode* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->val << " "<<endl;
        inOrder(root->right);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    TreeNode* root = insertLevelOrder(arr, n);

    cout << "Inorder traversal of constructed tree is: ";
    inOrder(root);

    return 0;
}

