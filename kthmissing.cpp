#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int kthmissing(vector<int>&nums , int k){
	vector<int>ans;
	for(int i = 0;i<nums.size();i++){
		if(nums[i] <= k){
			k++;
		} else {
			break;
		}
	}
	return k;
}
int main(){
	vector<int>nums = {4,7,9,10};
	int k = 3;
	cout<<kthmissing(nums,k)<<endl;
	return 0;
}
