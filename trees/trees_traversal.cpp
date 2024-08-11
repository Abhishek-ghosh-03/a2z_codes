#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct treenode{
	int val ;
	treenode* left;
	treenode* right;
	treenode(int x): val(x) , left(nullptr) , right(nullptr){}
};
treenode* constructTreenode(vector<int>&nodes){
        if(nodes.empty()) return nullptr;
        treenode* root = new treenode(nodes[0]) ;

        queue<treenode*> q;
        q.push(root);
        int i = 1;
        while(i < nodes.size()) {
                treenode* current = q.front() ;
                q.pop() ;
                if(i<nodes.size()) {
                        current->left = new treenode(nodes[i++]);
                        q.push(current->left);
                }
                if(i<nodes.size()){
                        current->right = new treenode(nodes[i++]);
                        q.push(current->right);
                }
        }
        return root ;
}

int main(){
	vector<int>&nodes = {1,3,4,5,2,7,8};
	treenode* postOrderroot = onstructPostorder(nodes);
	printTraversal(preOrderroot);
	printTraversal(postOrderroot);
	return 0;
}
