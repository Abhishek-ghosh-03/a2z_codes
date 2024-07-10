#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int xbit(int n){
	if(n%4 == 1) return 1;
	if(n%4 ==1) return (n+1);
	if(n%4 == 2) return n;
	return 0;
}
int xorbit(int a , int b){
	return xbit(b)^xbit(a-1);
}

/*
int xorbit(int a , int b){
	int xorr = a;
	for(int i = a+1 ; i<=b ;i++){
		xorr = xorr^i;
	}
	return xorr;
}*/
int main(){
	int l = 4, r = 8;
	cout<<xorbit(l,r)<<endl;
	return 0;
}
