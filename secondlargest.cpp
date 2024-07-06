#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int secondlargest(vector<int>& vec){
	int large = INT_MIN , second_large =INT_MIN;
	for(int i = 0 ;i<vec.size();i++){
		if(vec[i] >large){
			second_large = large ;
			large = vec[i];
		} else if( vec[i] > second_large && vec[i] != large){
			second_large = vec[i];
		}
	}
	return second_large;
}
int main(){
	int n ;
	cout<<"Enter the number: \n"<<endl;
	cin>>n;
	vector<int>vec(n);
	for(int i = 0;i<n ;i++){
		int value ;
		cout<<"Enter the value: \n"<<endl;
		cin>>value;
		vec[i] = value;
	}
	cout<<secondlargest(vec);
	return 0;
}
