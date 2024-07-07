#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int occurrences(int arr[] , int n , int k){
	int low = 0 , high = n-1;
	int count = 0;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid] == k){
			count++;
			int left = mid-1;
			while(left>0 && arr[left] == k){
				count++;
				left--;
			}

			int right = mid+1;
			while(right<n && arr[right] == k){
				count++;
				right++;
			}
			return count;
		} else if(arr[mid]>k) {
			high = mid-1;
		} else {
			low = mid+1;
		}
	}
	return count;
}
int main(){
	int arr[] = {2,2,3,3,3,3,4};
	int n = 7 , k = 3;
	cout<<occurrences(arr,n,k)<<endl;
	return 0;
}
