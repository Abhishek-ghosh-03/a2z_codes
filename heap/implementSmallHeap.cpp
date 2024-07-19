#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int kthsmallest(vector<int>&nums , int k){
	priority_queue<int,vector<int> , greater<int>>pq;
	for(int i = 0;i<nums.size() ;i++){
		pq.push(nums[i]);
	}
	int f = k - 1;
	for(int i = 0;i<f ;i++){
		cout<<pq.top()<<endl;
		pq.pop();
	}
	return pq.top();
}
int main(){
	vector<int>nums = {4,5,2,1,7};
	int k = 3;
	cout<< kthsmallest(nums,  k)<<endl;
	return 0;
}
