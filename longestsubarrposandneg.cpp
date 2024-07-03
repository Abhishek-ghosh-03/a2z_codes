#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int longestsubarrposandneg(int arr[] ,int k){
	map<int,int>hashmap;
	int sum  = 0, maxlen = 0;
	for(int i=0;i<4;i++){
		sum+=arr[i];
		if(sum == k){
			maxlen = max(maxlen, i+1);
		}
		int rem = sum - k;
		if(hashmap.find(rem) != hashmap.end()){
			int len = i - hashmap[rem];
			maxlen = max(maxlen,len);
		}
		if(hashmap.find(sum) == hashmap.end()){
			hashmap[sum] = i;
		}
	}
	return maxlen;
}
int main(){
	int arr[] = {-2,1,4,1,-1} , k;
	cout<<"Enter the number:"<<endl;
	cin>>k;
	cout<<longestsubarrposandneg(arr, k);
	return 0;
}
