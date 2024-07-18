#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fruitInBaskets(vector<int>&nums , int k){
	int left = 0 , right = 0 , maxLen = 0;
	unordered_map<int,int>hashmap;
	while(right < nums.size()){
		hashmap[nums[right]]++;
		if(hashmap.size()>k){
			hashmap[nums[left]]--;
			if(hashmap[nums[left]] == 0){
				hashmap.erase(nums[left]);
			}
			left++;
		}
		if(hashmap.size()<=k ){
			maxLen = max(maxLen , right - left + 1);
		}
		right++;
	}
	return maxLen;
}
/*
int fruitInBaskets(vector<int>&nums , int k){
	int left = 0, right = 0 , len = 0 , maxLen = 0;
	unordered_map<int,int>hashmap;
	while(right<nums.size()){
		hashmap[nums[right]]++;
		if( hashmap.size() > k){
			while(hashmap.size()>k){
				hashmap[nums[left]]--;
				if(hashmap[nums[left]] == 0){
					hashmap.erase(nums[left]);
				}
				left++;
			}
		}
		if(hashmap.size()<=k){
			maxLen = max(maxLen , right - left + 1);
		}
		right++;
	}
	return maxLen;
}

int fruitInBaskets(vector<int>& nums , int k){
	int maxLen = 0;
	for(int i = 0 ;i<nums.size() ;i++){
		set<int>st;
		int len = 0;
		for(int j = i ;j<nums.size() ;j++){
			st.insert(nums[j]);
			if(st.size()<=k){
				len = j - i + 1;
			}
		}
		maxLen = max(maxLen , len);
	}
	return maxLen;
}*/
int main(){
	vector<int>nums = {3,3,3,1,2,1,1,1,3};
	int k = 2;
	cout<< fruitInBaskets(nums,k)<<endl;
	return 0;
}
