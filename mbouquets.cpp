#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool possible(vector<int> &arr, int day, int m, int k) {
    int n = arr.size(); 
    int cnt = 0;
    int noOfB = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= day) {
            cnt++;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}/*
int mbouquets(vector<int>&nums, int n , int m){
	//int largest = findlargest(nums);
	long long val = n*1ll*m*1ll;
	if(val>nums.size()) return -1;

	int mini =INT_MAX ,maxi =INT_MIN;
	for(int i = 0;i<nums.size();i++){
		mini = min(mini,nums[i]);
		maxi = max(maxi,nums[i]);
	}
	for(int i = mini ; i<=maxi ;i++){
		if(possible(nums,i,m,n)){
			return i;
		}
	}
	return -1;
}*/
int mbouquets(vector<int>&nums,int n , int m){
	long long val = n*1ll*m*1ll;
	if(val>nums.size()) return -1;
	int mini =INT_MAX ,maxi =INT_MIN;
        for(int i = 0;i<nums.size();i++){
                mini = min(mini,nums[i]);
                maxi = max(maxi,nums[i]);
        }

	int low = mini, high = maxi ;
	while(low<=high){
		int mid =(low+high)/2;
		if(possible(nums,mid,m,n)){
			high = mid - 1;			
		} else {
			low = mid + 1;
		}
	}
	return low;
}

int main(){
	int n = 3 , m = 2;
	vector<int>nums = {1, 10, 3, 10, 2};
	cout<<mbouquets(nums,n,m)<<endl;
	return 0;
}
