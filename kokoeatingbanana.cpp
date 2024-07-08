#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findlargest(vector<int>&nums){
	int maxi =INT_MIN;
	for(int i = 0;i<nums.size();i++){
		if(maxi<nums[i]){
			maxi = nums[i];
		}
	}
	return maxi;
}
/*
bool iskoko(vector<int>&nums, int x , int h){
	int result = 0 , prod = 1;
	
	for(int i =0;i<nums.size();i++){
		result += ceil((double)nums[i]/(double)x);
	}
	if(result <= h){
		return true;
	}
	return false;
}*/
int iskoko(vector<int>&nums, int x , int h){
        int result = 0 , prod = 1;

        for(int i =0;i<nums.size();i++){
                result += ceil((double)nums[i]/(double)x);
        }
        return result;
}
/*
int kokobanana(vector<int>&nums, int h){
	int largest = findlargest(nums);
	for(int i = 1;i<=largest ;i++){
		if(iskoko(nums,i,h)){
			return i;	
		}
	}
	return largest;
}*/

int kokobanana(vector<int>&nums, int h){
	int largest = findlargest(nums);
	int low = 1, high = nums.size();
	while(low<=high){
		int mid = (low+high)/2;
		int res = iskoko(nums,mid,h);
		if(res == h){
			return mid;	
		} else if(res<h){
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return low;
}
int main(){
	vector<int>nums = {3,6,7,11};
	int h = 8;
	cout<<kokobanana(nums,h)<<endl;
	return 0;
}
