#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int largestelement(vector<int> &vec){
	int maxi =INT_MIN;
	for( auto it : vec){
		if(it > maxi){
			maxi = it;
		}
	}
	return maxi;
}
int main(){
	int n ;
	cout<<"Enter the size of the array:\n"<<endl;
	cin>>n;
	vector<int>vec(n);
	for(int i = 0;i<n;i++){
		int value;
		cout<<"Enter the value:\n"<<endl;
		cin>>value;
		vec[i] = value;
	}
	cout<<"Largest element \n"<<largestelement(vec);
	return 0;
}
