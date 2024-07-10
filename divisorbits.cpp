#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> divisorbit(int n){
	vector<int>ans;
	int num = n;
	for(int i = 1;i<=num;i++){
		if(num%i == 0){
			ans.push_back(i);
		}
	}
	return ans;	
}
int main(){
	int n = 17;
	vector<int>result = divisorbit(n);
	for(auto it : result){
		cout<<it<<endl;
	}
	return 0;
}
