#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool agg_cows(vector<int>&nums , int x , int cows){
	int count = 1,last = nums[0] ;
	for(int i = 1 ;i<nums.size();i++){
		if(nums[i] - last >= x){
			count++;
			last = nums[i];
		}
		if(count>=cows) return true;	
	}
	return false;
}
/*
int aggressive_cows(vector<int>&nums , int cows){
	int num = nums[nums.size()-1] - nums[0];
	for(int i = 1;i<num ;i++){
		if(agg_cows(nums,i,cows ) == false){
			return (i-1);		
		}
	}
	return num;
}*/
int aggressive_cows(vector<int>&nums , int cows){
	sort(nums.begin(), nums.end());
	int low = 1, high = nums[nums.size()-1] - nums[0];
	while(low<=high){
		int mid = (low+high)/2;
		if(agg_cows(nums,mid,cows)){
			low = mid+1;		
		} else {
			high = mid-1;
		}	
	}
	return high;
}
int main(){
	vector<int>nums ={0,3,4,7,9,10};
	int cows = 4;
	cout<<aggressive_cows(nums,cows)<<endl;
	return 0;
}
