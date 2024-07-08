#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int rotated(vector<int>&nums,int n){
	/*int mini = INT_MAX, mini_index = 0;
	for(int i = 0;i<n;i++){
		if(nums[i] < mini){
			mini = nums[i];
			mini_index = i;
		}
	}
	return (n-mini_index + 1);*/
	int ans = INT_MAX;
	int low = 0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(nums[low]<=nums[high]){
			ans = low;
			break;
		}

		if(nums[low]<=nums[mid]){
			if(nums[low]<ans){
				ans = low;
				low = mid+1;
			} else {
				high = mid-1;
			}
		}
	}
	return ans;
}
int main(){
	int n = 5;
	vector<int>nums = {3,4,5,1,2};
	int result = rotated(nums,n);
	cout<<result<<endl;
	return 0;
}
