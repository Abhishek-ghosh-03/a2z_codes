#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int ddd(vector<int>&nums ,int x , int days){
	int count  = 1 , sum = 0 ;
	for(int i =0;i<nums.size();i++){
		if(sum+nums[i]>x){
			count = count + 1;
			sum = nums[i];
		} else {
			sum+=nums[i];
		}
	}
	return count;
}
/*
int ddays(vector<int>&nums, int days){
	int largest = *max_element(nums.begin(),nums.end());
	int SumofNum = accumulate(nums.begin(),nums.end(),0);
	for(int i = largest ; i<=SumofNum ; i++){
		if(ddd(nums,i,days)){
			return i;
		}
	}
	return -1;
}*/

int ddays(vector<int>&nums , int days){
	int largest = *max_element(nums.begin(),nums.end());
        int SumofNum = accumulate(nums.begin(),nums.end(),0);
	int low =  largest , high = SumofNum;
	while(low<=high){
		int mid = (low+high)/2;
		int res = ddd(nums,mid,days);
		if(res<=days){
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return low;
}
int main(){
	vector<int>nums = {1,2,3,4,5,6,7,8,9,10};
	int days = 5 ;
	cout<<ddays(nums,days)<<endl;
	return 0;
}
