#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
	int val ;
	Node* left ;
	Node* right ;
	Node(int data):val(data),left(nullptr),right(nullptr){}
};
bool isLeaf(Node* root){
	return !root->left && !root->right;
}
void addLeftBoundary(Node* root, vector<int>& res) {
    Node* curr = root->left;
    while (curr) {
        if (!isLeaf(curr)) res.push_back(curr->val);

        if (curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

void addRightBoundary(Node* root, vector<int>& res) {
    Node* curr = root->right;
    vector<int> nums;
    while (curr) {
        if (!isLeaf(curr)) nums.push_back(curr->val);

        if (curr->right) curr = curr->right;
        else curr = curr->left;
    }
    for (int i = nums.size() - 1; i >= 0; i--) {
        res.push_back(nums[i]);
    }
}

void addLeaves(Node* root, vector<int>& res) {
    if (isLeaf(root)) {
        res.push_back(root->val);
        return;
    }
    if (root->left) addLeaves(root->left, res);
    if (root->right) addLeaves(root->right, res);
}

vector<int> printBoundary(Node* root) {
    vector<int> res;
    if (!root) {
        return res;
    }
    if (!isLeaf(root)) {
        res.push_back(root->val);
    }
    addLeftBoundary(root, res);
    addLeaves(root, res);
    addRightBoundary(root, res);

    return res;
}

void printResult(const vector<int>& result) {
    for (int l : result) {
        cout << l << " ";
    }
    cout << endl;
}

int main(){
	Node* root = new Node(1);
    	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	vector<int>result = printBoundary(root);
	printResult(result);
	return 0;
}
