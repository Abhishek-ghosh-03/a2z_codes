#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(vector<int>&nums1 , vector<int>&nums2){
	int i = 1 , j =0 , platform = 1 , result = 0;
	while(i<nums1.size() && j<nums2.size()){
		if(nums1[i] < nums2[j]){
			platform++;i++;
		} else if(nums1[i] > nums2[j]){
			platform--;j++;
		}

		result = max(result,platform);
	}
	return result;
}
int main(){
	vector<int>nums1 ={900,945,955,1100,1500,1800};
	vector<int>nums2 ={920,1200,1130,1150,1900,2000};
	int res = solve(nums1,nums2);
	cout<< res << endl ;
	return 0;
}
