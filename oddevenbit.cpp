#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool oddeven(int n){
	if(n&1){
		return true;
	} else {
		return false;
	}
}
int main(){
	int  n = 48;
	if(oddeven(n)){
		cout<<"Odd"<<endl;
	} else {
		cout<<"Even" << endl;
	}
	return 0;
}
