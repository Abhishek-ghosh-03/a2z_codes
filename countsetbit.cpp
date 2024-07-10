#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int countset(int n){
	int count = 0;
	for(int i = 1 ;i<=n;i++){
		int num = i;
		while(num){
			num&=(num-1);
			count++;
		} 
	}
	return count;
}
int main(){
	int n = 17;
	cout<<countset(n)<<endl;
	return 0;
}
