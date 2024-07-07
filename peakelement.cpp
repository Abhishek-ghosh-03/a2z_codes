#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int peakelement(int arr[] , int n){
	int low = 0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid] >arr[mid-1] && arr[mid]>arr[mid+1]){
			return mid;
		}
	        if(arr[mid] >arr[mid-1]){
	       		low = mid+1;
	       	} else {
			high = mid-1;
		}	
	}
	return -1;
}
int main(){
	int arr[] = {5,4,3,2,1};
	int n = 7;
	cout<<peakelement(arr,n)<<endl;
	return 0;
}
