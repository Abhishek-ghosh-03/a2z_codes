#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int upper_bound(int arr[] , int n){
	int low = 0 , high = 5;
	int ans = 5;
	while(low<high){
		int mid = (low+high)/2;
		if(arr[mid]>n){
			ans = mid ;
			high = mid -1;
		} else {
			low =  mid+1;
		}
	}
	return ans;
}
int main(){
	int arr[] = {3,4,8,9,15,19};
	int n  = 9;
	cout<<upper_bound(arr,n)<<endl;
	return 0;
}
