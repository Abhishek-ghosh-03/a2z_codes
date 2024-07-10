#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool power_of_two(int n){
	return (n>0) && ((n&(n-1)) == 0);
}
int main(){
	int n = 16 ;
	if(power_of_two(n)){
		cout<<"True"<<endl;
	} else {
		cout<<"False"<<endl;
	}
	return 0;
}
