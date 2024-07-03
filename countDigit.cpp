#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int counter_number ,count = 0 ;
	cout<<"Enter the number :"<<endl;
	cin>>counter_number;
	while(counter_number!=0){
		count++;
		counter_number/=10;
	}
	cout<<"The count :"<<count<<endl;
	return 0;
}
