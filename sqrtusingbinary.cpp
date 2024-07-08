#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sQrt(int n){
	int low = 1, high = n;
	while(low<=high){
		int mid = (low+high)/2;
		int val = mid*mid;
		if(val <= (long long)(n)){
			low = mid+1;
		} else{
			high = mid-1;
		}
	}
	return high;
}
int main(){
	int n = 36;
	cout<<sQrt(n)<<endl;
	return 0;
}
