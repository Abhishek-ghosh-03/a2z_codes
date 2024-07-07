#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int lastoccurrence(vector<int> &nums , int target , int n){
	sort(nums.begin(),nums.end());
	int low = 0, high = n-1;
	int res = -1;
	while(low<=high){
		int mid = (low+high)/2;
		if(nums[mid] == target){
			res = mid;
			low = mid + 1;
		} else if(nums[mid]>target){
			high  = mid -1;
		} else {
			low = mid + 1;
		}
	}
	/*
	int res = -1 ;
	for(int i = n-1;i>=0;i--){
		if(nums[i] == target){
			res = i; break;
		}
	}
	*/
	return res;
}
int main(){
	vector<int>nums = {3,4,13,13,13,20,40};
	int target = 13 , n = 7;
	cout<< lastoccurrence(nums,target,n)<<endl;
	return 0;
}
