#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge(int arr[] , int low , int mid , int high){
	int n1 = mid - low +1 , n2 = high - mid;
	int* leftArr = new int[n1] ;
        int* rightArr = new int[n2];
	for( int i = 0 ;i<n1;i++){
		leftArr[i] = arr[low+i];
	}
	for(int j = 0 ;j<n2;j++){
		rightArr[j] = arr[mid+1+j];
	}

	int i = 0 , j = 0 , k= low;
	while(i<n1 && j<n2){
		if(leftArr[i] <= rightArr[j]){
			arr[k] = leftArr[i];i++;
		} else {
			arr[k] = rightArr[j] ; j++;
		}
		k++;
	}
	while(i<n1){
		arr[k] = leftArr[i];i++;k++;
	}
	while(j<n2){
		arr[k] = rightArr[j];j++;k++;
	}
	delete[] leftArr;
	delete[] rightArr;
}
void mergesort(int arr[] , int low , int high){
	if(low>=high) return;
	int mid = (low+high)/2;
	mergesort(arr,low,mid);
	mergesort(arr,mid+1,high);
	merge(arr,low,mid,high);
}
int main(){
	int arr[] = {5,1,8,33,2};
	mergesort(arr, 0, 4);
	for(int i = 0; i<4;i++){
		cout<<arr[i] << " ";
	}
	return 0;
}
