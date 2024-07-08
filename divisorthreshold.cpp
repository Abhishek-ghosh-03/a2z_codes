#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int min_num(vector<int>&nums , int x , int limit){
	int sum = 0;
	for(int i = 0 ;i<nums.size() ;i++){
		sum+= (nums[i] + x - 1)/x;
	}
	return sum;
}
int divisorthreshold(vector<int>&nums, int limit){
	int maxi = *max_element(nums.begin(),nums.end());
	for(int i = 1 ;i<= maxi ;i++){
		int res  = min_num(nums,i,limit);
		if(res <= limit){
			return i;
		}
	}
	return maxi;
}
int main(){
	vector<int>nums = {1,2,5,9};
	int limit = 6 ;
	cout<<divisorthreshold(nums,limit)<<endl;
	return 0;
}
