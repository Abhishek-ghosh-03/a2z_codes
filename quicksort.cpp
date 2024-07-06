#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int partition(int arr[] , int low , int high){
	int pivot = arr[low];
	int i = low , j = high;
	while(i<j){
		while(arr[i] <= pivot && i<=high-1){
			i++;
		}
		while(arr[j]>pivot && j>= low+1){
			j--;
		}
		if(i<j) swap(arr[i],arr[j]);
	}
	swap(arr[low] , arr[j]);
	return j;
}
void quicksort(int arr[] , int low , int high){
	if(low<high){
		int pindex = partition(arr,low,high);
		quicksort(arr,low,pindex-1);
		quicksort(arr,pindex+1,high);
	}
}
int main(){
	int arr[] = {2,7,4,55,1};
	quicksort(arr,0,4);
	for(int i = 0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
