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
        
        int mini = *max_element(nums.begin(),nums.end());
        int maxi = accumulate(nums.begin(),nums.end(),0);
        while(mini<=maxi){
		int mid = (mini+maxi)/2;
                int res = allocated_pages(nums,mid,students);
                if(res > students){
                        mini = mid+1;
                } else {
			maxi = mid-1;
		}
        }
        return mini;
}
int main(){
        vector<int>nums = {10,20,30,40};
        int students = 2;
        cout<<allocationbooks(nums,students)<<endl;
        return 0;
}

