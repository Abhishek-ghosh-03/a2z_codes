#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void recursiveinsertion(int arr[] ,int i , int n){
	if(i == 1) return;
	int j = i;
	while(j>0 && arr[j-1] > arr[j]){
		swap(arr[j] , arr[j-1]);
		j--;
	}

	recursiveinsertion(arr, i+1 , n);
}
int main(){
	int arr[] = {2,7,4,1};
	recursiveinsertion(arr,0,4);
	for(int i=0;i<4;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
