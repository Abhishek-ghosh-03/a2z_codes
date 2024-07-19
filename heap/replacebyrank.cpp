#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void replacebyrank(vector<int>&nums){
	vector<int>number;
	map<int,int>mpp;
	int temp = 1;
	for(int i = 0;i<nums.size();i++){
		number.push_back(nums[i]);
	}
	sort(number.begin(),number.end());
	for(int i = 0 ;i<nums.size() ;i++){
		if(mpp[number[i]] == 0){
			mpp[number[i]] = temp;
			temp++;
		}
	}
	for(int i = 0;i<nums.size() ;i++){
		cout<<mpp[nums[i]]<<" ";
	}
}
int main(){
	vector<int>nums = {20,15,26,2,98,6};
	replacebyrank(nums);
	return 0;
}
