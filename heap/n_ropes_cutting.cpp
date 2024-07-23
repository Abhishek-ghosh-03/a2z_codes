#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n_ropes(vector<int>&nums){
	int totalCost = 0;
	priority_queue<int,vector<int>,greater<int>> minheap;
	for(int rope : nums){
		minheap.push(rope);
	}
	while(minheap.size()>1){
		int first = minheap.top();
		minheap.pop();
		int second = minheap.top();
		minheap.pop();
		int sum = first + second;
		totalCost += sum;
		minheap.push(sum);
	}
	return totalCost;
}
int main(){
	vector<int>nums = {2,4,5,8,6,9};
	cout<<n_ropes(nums)<<endl;
	return 0;
}
