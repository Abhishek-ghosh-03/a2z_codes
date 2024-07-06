#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int longestsumwithzeroarr(vector<int>&nums){
	/*vector<vector<int>> ans;
	sort(nums.begin(), nums.end());
	for(int i=0;i<nums.size();i++){
		if(i!=0 && nums[i] == nums[i-1]) continue;
		int j = i+1 , k = nums.size()-1;
		while(j<k){
			int sum = nums[i] + nums[j] + nums[k];
			if(sum>0){
				k--;
			} else if(sum<0){
				j++;
			} else {
				ans.push_back({nums[i],nums[j],nums[k]});
				j++;
			       	k++;
				while(j<k && nums[j] == nums[j-1]) j++;
				while(j<k && nums[k] == nums[k+1]) k--;
			}
		}
	}
	return ans;*/

	unordered_map<int,int>mpp;
	int maxi = 0, sum = 0;
	for(int i = 0; i<nums.size() ;i++){
		sum+=nums[i];
		if(sum == 0) {
			maxi = i+1;
		} else {
			if(mpp.find(sum) != mpp.end()){
				maxi = max(maxi , i-mpp[sum]);
			} else {
				mpp[sum] = i;
			}
		}
	}
	return maxi;
}
int main(){
	vector<int>nums = {9,-3,3,-1,6,-5};
	int count = longestsumwithzeroarr(nums);
	/*for(auto it : result){
		cout<<"[";
		for(int i = 0 ;i<it.size() ; i++){
			cout<<it[i]<<",";
		}
		cout<<"]";
		count++;
	}*/
	cout<< count << ":The Total number of sub arrays"<<endl;
	return 0;
}
