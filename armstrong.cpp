#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isArmstrong(int num){
	int k = to_string(num).length();
	int n = num,rem =0;
	int result = 0;
	while(num!=0){
		rem = num%10;
		result = result + pow(rem,k);
		//if(result >INT_MAX || result < INT_MIN){
		//	return false;
		//}
		num=num/10;
	}
	return (result == n) ? true : false;
}
int main(){
	int number ;
	cout<<"Enter a number :"<<endl;
	cin>>number;
	if(isArmstrong(number)){
		cout<<"armstrong"<<number<<endl;
	} else {
		cout<<"not armstrong"<<number<<endl;
	}
	return 0;
}
