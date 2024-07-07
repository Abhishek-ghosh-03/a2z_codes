#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> majorityelement(vector<int>&nums){
	vector<int>ans;
	map<int,int>mpp;
	for(auto it : nums){
		mpp[it]++;
	}
	for(auto it : mpp){
		if(it.second>(nums.size()/3)){
			ans.push_back(it.first);
		}
	}
	return ans;
}
int main(){
	vector<int> nums = {11,33,33,11,33,11};
	vector<int>result = majorityelement(nums);
	for(int it : result){
		cout<<it<<endl;
	}
	return 0;
}
