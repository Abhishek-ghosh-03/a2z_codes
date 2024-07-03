#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int linearsearch(vector<int>&vec , int k){
	int res = 0;
	for(int i = 0;i<vec.size();i++){
		if(vec[i] == k){
			res = i;
			break;
		}
	}
	return res;
}
int main(){
	int n;
	cout<<"Enter the number of elements : \n"<< endl;
	cin>> n;
	vector<int>vec(n);
	for(int i =0;i<n;i++){
		int value;
		cout<<"Enter the value:"<<endl;
		cin>>value;
		vec[i] = value;
	}
	int k;
	cout<<"Enter the number to be searched:"<<endl;
	cin>>k;
	cout<<"The index position of the array: \n"<<linearsearch(vec, k);
	return 0;
}
