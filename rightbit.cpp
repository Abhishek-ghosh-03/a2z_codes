#include<bits/stdc++.h>
#include<iostream>
int rightbit(int n){
	if(n&(n+1) == 0){
		return n;
	}
	return n | (n+1);
}
using namespace std;
int main(){
	int n = 15;
	cout<<rightbit(n)<<endl;
	return 0;
}
