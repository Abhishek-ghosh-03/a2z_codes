#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void bubblesort(int arr[]){
	bool swapped ;
	for(int i = 0;i<3 ; i++){
		swapped = false;
		for(int j = 0 ;j<3-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped = true;
			}
		}
		if(!swapped) break;
	}

	for(int i = 0;i<3;i++){
		cout<< arr[i] << " " ;
	}
}
int main(){
	int arr[] = {1,4,7,2};
	bubblesort(arr);
	return 0;
}
