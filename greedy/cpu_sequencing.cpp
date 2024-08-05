#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(int arr[]){
	int  waitime = 0 , totaltime = 0;
	int n = 5;
	sort(arr,arr + n);
	for(int i = 0;i<n;i++){
		waitime += totaltime;
		totaltime += arr[i];
	}
	return waitime/n;
}
int main(){
	int arr[] = {3,4,1,7,2};
	cout << solve(arr) << endl;
	return 0;
}
