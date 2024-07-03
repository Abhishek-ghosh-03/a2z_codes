#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void number_to_N(vector<int>&result ,int i ,int num){
	if(i>num) return;
	result[i] = i+1;
	number_to_N(result,i+1,num);
}
int main(){
	int number ;
	cout<<"Enter the number:"<<endl;
	cin>>number;
	vector<int>result(number);
	number_to_N(result,0,number);
	for(int nums : result){
		cout<<" "<<nums;
	}
	return 0;
}
