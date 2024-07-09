#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int rowwithone(vector<vector<int>>&nums){
	int cnt_max = INT_MIN, index = -1;
	for(int i = 0;i<nums.size();i++){
		int cnt_ones  = 0;
		for(int j = 0;j<nums.size();j++){
			if(nums[i][j] == 1){
				cnt_ones++;
			}
		}
		if(cnt_ones > cnt_max){
			cnt_max =  cnt_ones;
			index = i;
		}
	}
	return index;
}
int main(){
	vector<vector<int>>nums = {{1,0,0},{1,0,1},{0,0,1}};
	cout<<rowwithone(nums)<<endl;
	return 0;
}
