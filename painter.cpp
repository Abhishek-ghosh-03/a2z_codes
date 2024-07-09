#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool painter_partition(vector<int>&nums , int x  , int k){
	int count = 0,load = 0;
	for(int i =0;i<nums.size();i++){
		if(load +nums[i] >= x){
			count++;
			load = nums[i];
		} else {
			load += nums[i];
		}
	}

	return count>=k;
}
int painter(vector<int>&nums , int k){
	int low = *max_element(nums.begin(),nums.end()) , high = accumulate(nums.begin(),nums.end(),0);
	while(low<=high){
		int mid =(low+high)/2;
		if(painter_partition(nums,mid,k)){
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return high;
}
int main(){
	vector<int>nums = {25,46,28,49,24};
	int k = 4;
	cout<<painter(nums,k)<<endl;
	return 0;
}
