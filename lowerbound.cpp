#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int lower_bound(int arr[] , int n){
	int size = 3;
	int ans = size;
	int low = 0 , high = size;
	while(low<=high){
		int mid = low+high/2;
		if((arr[mid]>=n)){
			ans = mid;
			high = mid-1;
		} else {
			low = mid + 1;
		}
	}
	return ans;
}
int main(){
	int arr[] = {1,2,2,3} ,  n = 4;
	cout<<lower_bound(arr,n)<<endl;
	return 0;
}
