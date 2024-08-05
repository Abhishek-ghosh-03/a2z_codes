#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Treenode{
	int val ;
	Treenode *left ;
	Treenode *right ;
	Treenode(int x) : val(x) , left(nullptr) , right(nullptr){}
};
Treenode* constructTreenode(vector<int>&nodes){
	if(nodes.empty()) return nullptr;
	Treenode* root = new Treenode(nodes[0]) ;

	queue<Treenode*> q;
	q.push(root);
	int i = 1;
	while(i < nodes.size()) {
		Treenode* current = q.front() ;
		q.pop() ;
		if(i<nodes.size()) {
			current->left = new Treenode(nodes[i++]);
			q.push(current->left);
		}
		if(i<nodes.size()){
			current->right = new Treenode(nodes[i++]);
			q.push(current->right);
		}
	}
	return root ;
}
void printTree(Treenode* root){
	if ( root == nullptr ) return ;
	queue<Treenode*> q;
	q.push(root); 
	while(!q.empty()){
		Treenode* current = q.front();
		q.pop();
		cout<<current->val<<" ";
		if(current->left != nullptr ) q.push(current->left);
		if(current->right != nullptr) q.push(current->right);
	}
}
int main(){
	vector<int> nodes = {1,2,3,4,5,6,7};
	Treenode* root = constructTreenode(nodes);
	cout<<"Printing the binary tree form of the nodes"<<endl;
	printTree(root);
	return 0;
}
