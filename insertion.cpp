#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void insertionsort(int arr[]){
	for(int i = 0;i<=3 ;i++){
		int j = i;
		while(j>0 && arr[j-1] > arr[j]){
			swap(arr[j],arr[j-1]);
			j--;
		}
	}

	for(int i = 0 ;i<=3;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[] = {2,7,1,4};
	insertionsort(arr);
	return 0;
}
