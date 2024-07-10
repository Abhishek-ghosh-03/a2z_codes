#include<bits/stdc++.h>
#include<iostream>
using namespace std;
pair<int,int> swapbit(int a , int b){
	a = a^b;
	b = a^b;
	a = a^b;
	return {a,b};
}
int main(){
	int a = 13 , b =9;
	pair<int,int>pairset = swapbit(a,b);
	cout<<pairset.first <<" "  << pairset.second << endl;
	return 0;
}
