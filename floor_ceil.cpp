#include<bits/stdc++.h>
#include<iostream>
using namespace std;
pair<int,int>floor_ceil(int nums[] , int k){
	int low = 0, high = 5;
	int maxi = -1, mini = -1;
	while(low<=high){
		int mid = (low+high)/2;
		if(nums[mid]>k){
			maxi = nums[mid];
			if(mid == 0){
				mini = -1;
			} else {
				mini = nums[mid-1];
			}

			high = mid-1;
		} else if(nums[mid] == k) {
				 maxi = nums[mid];
				 mini = nums[mid];
				 break;
		} else {
			low = mid+1;
		}
	}
	return {mini , maxi};
}
int main(){
	int arr[] = {3,4,4,7,8,10};
	int k = 8;
	pair<int,int>pairSet = floor_ceil(arr,k);
	cout << "Floor: " << pairSet.first << ", Ceil: " << pairSet.second << endl;
	return 0;
}
