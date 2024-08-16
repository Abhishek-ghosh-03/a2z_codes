                            
#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
bool getPath(TreeNode* root,int target , vector<int>&ans){
	if(!root) return false;
	ans.push_back(root->val);
	if(root->val == target) return true;
	if(getPath(root->left , target , ans) || getPath(root->right,target,ans)) return true;
	ans.pop_back();
	return false;
}
vector<int>solve(TreeNode* root, int target){
	vector<int>ans;
	if(root == nullptr) return ans;
	getPath(root,target,ans);
	return ans;
}
int main(){
	TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    int targetLeafValue = 7;

    vector<int> path = solve(root, targetLeafValue);

    cout << "Path from root to leaf with value " <<
        targetLeafValue << ": ";
    for (int i = 0; i < path.size(); ++i) {
        cout << path[i];
        if (i < path.size() - 1) {
            cout << " -> ";
        }
    }

    return 0;
}
