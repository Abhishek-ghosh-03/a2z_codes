#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> reverseArray(vector<int>arr){
	vector<int>nums(arr);
	reverse(nums.begin(),nums.end());
	return nums;
}
int main(){
	int number ;
	cout<<"Enter the number:"<<endl;
	cin>>number;
	vector<int>arr;
	for(int i=0;i<number;i++){
		int value ;
		cin>>value;
		arr.push_back(value);
	}
	vector<int>result = reverseArray(arr);
	for(int num : result){
		cout<<num<<" ";
	}
	return 0;
}
