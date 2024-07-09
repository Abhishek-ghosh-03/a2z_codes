#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findmedian(vector<vector<int>>&nums){
	vector<int>ans;
	for(int i = 0 ;i<nums.size();i++){
		for(int j =0;j<nums[0].size();j++){
			ans.push_back(nums[i][j]);
		}
	}
	int res;
	sort(ans.begin(),ans.end());
	res = ans[(int)ans.size()/2];
	return res;
}
int main(){
	vector<vector<int>>nums ={{1, 2, 3, 4, 5},
        {8, 9, 11, 12, 13},
        {21, 23, 25, 27, 29}};
	cout<<findmedian(nums)<<endl;
	return 0;
}
