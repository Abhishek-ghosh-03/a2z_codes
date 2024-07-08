#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int kthsorted(vector<int>&nums, vector<int>&nums1 , int k){
	vector<int>nums2;
	int i = 0, j=0;
	while(i<nums.size() && j<nums1.size()){
		if(nums[i]<nums1[j]){
			nums2.push_back(nums[i]);i++;
		} else {
			nums2.push_back(nums[j]);j++;
		}
	}
	while(i<nums.size()){
		nums2.push_back(nums[i]);i++;
	}
	while(j<nums1.size()){
		nums2.push_back(nums1[i]);j++;
	}
	int ans;
	for(int i = 0;i<nums2.size();i++){
		if(i == k){
			ans = nums2[i];
		}
	}
	return ans;
       	
}
int main(){
	vector<int>nums ={1,4,7,10,12};
	vector<int>nums1 ={2,3,6,15};
	int k = 3;
	cout<<"Element :"<<kthsorted(nums,nums1,k)<<endl;
	return 0;
}
