#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int theprefixxor(int arr[], int k ){
	int xr = 0 , count = 0;
	map<int,int>mpp;
	mpp[xr]++;
	for(int i=0;i<5;i++){
		xr = xr^arr[i];
		int x = xr^k;
		count+=mpp[x];
		mpp[xr]++;
	}
	return count;
}
int main(){
	int arr[] = {4,2,2,6,4};
	int k = 6;
	cout<<"The result" << theprefixxor(arr , k)<<endl;
	return 0;
}
