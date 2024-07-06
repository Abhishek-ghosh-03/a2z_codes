#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void selectionsort(int arr[]){
	for(int i = 0 ;i< 3 ;i++){
		int mini = i;
		for(int j = i+1 ; j< 4 ;j++){
			if(arr[j] < arr[mini]){
				mini = j;
			}
		}
		swap(arr[mini], arr[i]);
	}
	for(int i = 0;i<4;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[] = {1,4,5,2};
	selectionsort(arr);
	return 0;
}
