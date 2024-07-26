#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool solve(vector<int>&nums , int curr){
	int ten = 0, tt = 0 ;
	for(int i =0;i<nums.size() ;i++){
		if(nums[i] == 5){
			curr++;
		} else if(nums[i] == 10) {
			if (curr){
				curr--;
				ten++;
			}
			else return false;
		} else if(nums[i] == 20){
			if(curr && ten){
				curr--;ten--;tt++;
			} else if(curr >= 3){
				curr -= 3;
			}
			else return false;
		}
	}
	return true;
}
int main(){
	vector<int>nums ={5,5,10,10,20};
	int curr = 0;
	if(solve(nums,curr)){
		cout<<"True"<<endl;
	} else {
		cout<<"False"<<endl;
	}
	return 0;
}
