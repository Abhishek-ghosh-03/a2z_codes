#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int taskScheduler(vector<char>&nums ,  int n){
	unordered_map<char,int>taskCount ;
	for(auto task : nums){
		taskCount[task]++;
	}
	priority_queue<int>maxheap;
	for(const auto& it : taskCount){
		maxheap.push(it.second);
	}
	int intervals = 0;
	queue<pair<int,int>>waitQueue;

	while(!maxheap.empty() || !waitQueue.empty()){
		intervals++;
		if(!maxheap.empty()){
			int count = maxheap.top();
			maxheap.pop();
			if(count>1){
				waitQueue.push({count-1,intervals+n});
			}
		}
		if(!waitQueue.empty() && waitQueue.front().second == intervals){
			maxheap.push(waitQueue.front().first);
			waitQueue.pop();
		}
	}
	return intervals;
}
int main(){
	vector<char>nums = {'A','A','A','B','B','B'};
	int n = 2;
	cout<< taskScheduler(nums,n) << endl;
	return 0;
}
