#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool searchtwoarray(vector<vector<int>>&nums,int target){
	int low = 0, high = nums.size()*nums[0].size() - 1;
	while(low<=high){
		int mid = (low+high)/2;
		int row = mid/nums[0].size() , col = mid%(nums.size());
		if(nums[row][col] == target){
			return true;
		} else if(nums[row][col] < target){
			low = mid+1;
		} else {
			high = mid -1;
		}
	}
	return false;	
}
int main(){
	vector<vector<int>>nums = {{2,3,4},{5,6,7},{8,9,10}};
	int target = 5;
	if(searchtwoarray(nums,target))
	{
		cout<<"True"<<endl;
	}
	else {
		cout<<"False"<<endl;
	}
	return 0;
}
