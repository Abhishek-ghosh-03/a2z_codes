#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> twooddoccurrences(vector<int>&nums){
	unordered_map<int,int>hashmap;
	vector<int>ans;
	for(int i =0;i<nums.size();i++){
		hashmap[nums[i]]++;
	}
	for(auto it : hashmap){
		if(it.second&1 == 1){
			ans.push_back(it.first);
		}
	}
	return ans;
}
int main(){
	vector<int>nums = {1, 7, 5, 7, 5, 4, 7, 4};
	vector<int>result = twooddoccurrences(nums);
	for(auto it : result){
		cout<<it<<endl;
	}
	return 0;
}
