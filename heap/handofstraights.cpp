#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool handofstraights(vector<int>&nums , int groupsize){
	if(nums.size() % groupsize != 0) return false;
	sort(nums.begin(), nums.end());
	while(!nums.empty()){
		int start = nums[0];
		for(auto i = 0;i<groupsize ;i++){
			auto it = find(nums.begin(), nums.end(),start+i);
			if(it == nums.end()) return false;
			nums.erase(it);
		}
	}
	return true;

}
int main(){
	vector<int>nums = {1,2,3,4,5};
	int groupsize = 4;
	if(handofstraights(nums,groupsize)){
		cout<<"True"<<endl;
	} else {
		cout<<"False"<<endl;
	}
	return 0;
}
