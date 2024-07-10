#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool kthbit(int n , int k){
	if(n&(1<<(k-1))){
		return true;
	} else {
		return false;
	}
}
int main(){
	int n = 4 , k =0;
	if(kthbit(n,k)){
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
	return 0;
}
