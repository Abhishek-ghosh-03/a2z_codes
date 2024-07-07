#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<vector<int>> overlapping(vector<vector<int>>&nums){
	vector<vector<int>>ans;
	sort(nums.begin(),nums.end());
	for(int i=0;i<nums.size();i++){
		int start = nums[i][0];
		int end = nums[i][1];
		if(!ans.empty() && end <= ans.back()[1]) continue;

		for(int j =i+1 ;j<nums.size();j++){
			if(nums[j][0]<=end){
				end = max(end,nums[j][1]);
			}
			else {
				break;
			}
		}
		ans.push_back({start,end});
	}
	return ans;
}
int main(){
	vector<vector<int>>nums = {{1,4},{4,5}};
	vector<vector<int>>result = overlapping(nums);
	for(auto it : result){
		cout<<"["<< it[0] <<","<< it[1]<<"]" <<endl;
	}
	return 0;
}
