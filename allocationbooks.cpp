#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int allocated_pages(vector<int>&nums , int x , int students){
	int count = 1;
	long long pagestudent = 0 ;
	for(int i = 0;i<nums.size();i++){
		if(pagestudent + nums[i] <= x){
			pagestudent+=nums[i];
		} else {
			count++;
			pagestudent = nums[i];
		}
	}
	return count;
}
int allocationbooks(vector<int>&nums,int students){
	if(students>nums.size()) return -1;
	int mini = *max_element(nums.begin(),nums.end());
	int maxi = accumulate(nums.begin(),nums.end(),0);
	for(int i = mini ;i<=maxi ;i++){
		int res = allocated_pages(nums,i,students);
		if(res == students){
			return i;
		}
	}
	return mini;
}
int main(){
	vector<int>nums = {25,46,28,49,24};
	int students = 4;
	cout<<allocationbooks(nums,students)<<endl;
	return 0;
}
