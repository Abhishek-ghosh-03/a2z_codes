#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int inversion(vector<int>&nums, int n){
	int count = 0;
	for(int i =0 ;i<nums.size();i++){
		for(int j = i+1;j<nums.size();j++){
			if(nums[i] > nums[j]){
				count++;
			}
		}
	}
	return count;
}
int main(){
	vector<int> nums = {5,3,2,1,4};
	int n = 5;
	int result = inversion(nums, n);
	cout<< result << endl;
	return 0;
}
