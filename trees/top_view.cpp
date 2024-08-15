#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <map>

using namespace std;

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    // Constructor to initialize the node with a value
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

vector<int> topView(Node* root) {
    vector<int> ans;
    if (root == nullptr) return ans;
    
    map<int, int> mpp; // To store the first node at each horizontal distance
    queue<pair<Node*, int>> q; // Queue to perform BFS
    
    q.push({root, 0});
    
    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        
        Node* node = p.first;
        int line = p.second;
        
        // If the horizontal distance is encountered for the first time, insert it into the map
        if (mpp.find(line) == mpp.end()) {
            mpp[line] = node->data;
        }
        
        // Traverse the left and right children of the current node
        if (node->left != nullptr) q.push({node->left, line - 1});
        if (node->right != nullptr) q.push({node->right, line + 1});
    }
    
    // Collect the result from the map
    for (auto it : mpp) {
        ans.push_back(it.second);
    }
    
    return ans;
}

int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->left->left->right = new Node(5);
    root->left->left->right->right = new Node(6);
    root->right = new Node(3);
    root->right->right = new Node(7);
    root->right->left = new Node(9);

    // Calling the topView function
    vector<int> result = topView(root);
    
    // Printing the top view
    for (int val : result) {
        cout << val << " ";
    }
    
    return 0;
}

