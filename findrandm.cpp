#include<bits/stdc++.h>
#include<iostream>
using namespace std;
pair<int,int> findrandmelement(int arr[],int n){
	int the_number ;
	for(int i=1;i<=n;i++){
		if(arr[i] == i ){
			continue;
		} else {
			the_number = i;
		}
	}

	unordered_map<int,int>hashmap;
	for(int i = 0;i<n;i++){
		hashmap[arr[i]]++;
	}
	int maxi = INT_MIN , most_frequency;
	for(auto it : hashmap){
		if(maxi < it.second){
			maxi = it.second;
			most_frequency = it.first;
		}
	}
	return {most_frequency,the_number};
}
int main(){
	int arr[] = {3,1,2,5,4,6,7,5};
	int n  = 8;
	pair<int,int>thepair = findrandmelement(arr,n);
	cout<<"Pairs with :"<<thepair.first << " " << thepair.second<<endl;
	return 0;
}
