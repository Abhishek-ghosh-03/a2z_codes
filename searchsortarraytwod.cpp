#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool search(vector<vector<int>>&nums, int target){
	int n = nums.size();
	int m = nums[0].size();
	int row = 0 , col = m-1;
	while(row<n && col>=0){
		if(nums[row][col] == target){
			return true;
		} else if(nums[row][col] < target){
			row++;
		} else {
			col--;
		}
	}
	return false;
}
int main(){
	vector<vector<int>>nums = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
	int target = 101;
	if(search(nums,target)){
		cout<<"TRUE"<<endl;
	} else {
		cout<<"FALSE"<<endl;
	}
	return 0;
}
