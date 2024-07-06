#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int BinaryGCD(int a , int b){
	if(a == 0) return b;
	if(b == 0) return a;

	int shift = 0;
	while( ((a|b)&1) == 0)
	{
		a>>=1;
		b>>=1;
		shift++;
	}

	while((a&1) == 0){
		a>>=1;
	}

	do{
		while((b&1) == 0) b>>=1;
		if(a>b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		b-=a;
	}while(b!=0);

	return a<<shift;
}
int main(){
	int number , number1;
	cout<<"Enter the number :"<<endl;
	cin>> number >>number1;
	cout<< "Resulting GCD value" << BinaryGCD(number, number1)<<endl;
	return 0;
}
