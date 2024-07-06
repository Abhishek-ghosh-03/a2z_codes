#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> leader(int arr[],int n){
	vector<int>ans;
	int maxval = arr[n-1];
	ans.push_back(arr[n-1]);
	for(int i=n-2;i>=0;i--){
		if(arr[i]>maxval){
			ans.push_back(arr[i]);
			maxval = arr[i] ; 
		}
	}
	return ans;
}
int main(){
	int arr[] = {3,5,1,3,2} , n =5;
	vector<int>result = leader(arr,n);
	for(int it : result){
		cout<<it<<" ";
	}
	return 0;
}
