#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void recursivebubble(int arr[] , int n){
	if( n == 1) return;

	for(int i =0 ;i<=n-2;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}

	recursivebubble(arr,n-1);
}
int main(){
	int arr[] = {2,7,4,1};
	recursivebubble(arr, 4);
	for(int i=0 ;i<4 ;i++){
		cout<<arr[i] << " ";
	}
	return 0;
}
