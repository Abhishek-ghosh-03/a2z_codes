#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int longestsubarray(int arr[] ,int n){
	int left = 0;
        int	right =0 , maxlen =0;
	long long sum = arr[0] ; 
	while( right<7){
		while(left<=right && sum>n){
			sum-=arr[left];
			left++;
		}
		if(sum == n){
			maxlen = max(maxlen, right - left +1);
		}
		right++;
		if(right<7) sum+=arr[right];
	}
	return maxlen;
}
int main(){
	int arr[] = {1,2, 3,4 ,5,6,7} , n;
	cout<<"Enter the number to be sumed up:"<<endl;
	cin>>n;
	cout<<"Longest SubArray :"<<longestsubarray(arr,n);
	return 0;
}
