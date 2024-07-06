#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int factorial(int num){
	if(num == 0 || num == 1){
		return 1;
	}
	return factorial(num-1)*num;
}
int main(){
	int number ;
	cout<<"Enter the number:"<<endl;
	cin>>number;
	cout<<"Factorial"<<factorial(number);
	return 0;
}
