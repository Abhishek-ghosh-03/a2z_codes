#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void ntimes(int number){
	if(number == 0) return;
	cout<<number<<" ";
	ntimes(number-1);
}
int main(){
	int number;
	cout<<"Enter the number"<<endl;
	cin>>number;
	ntimes(number);
	return 0;
}
