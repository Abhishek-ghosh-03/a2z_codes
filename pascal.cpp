#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int nCr(int n , int r){
	long long res = 1;
	for(int i =0;i<r;i++){
		res = res*(n-1);
		res = res/(i+1);
	}
	return res;
}
vector<vector<int>>pascal_triangle(int n){
	vector<vector<int>>ans;
	for(int i=1;i<=n;i++){
		vector<int>templst;
		for(int j= 1;j<=i;j++){
			templst.push_back(nCr(i-1,j-1));
		}
		ans.push_back(templst);
	}
	return ans;
}
int main(){
	int n = 5;
	vector<vector<int>> result = pascal_triangle(n);
	for(auto it : result){
		for(auto ele : it){
			cout<<ele<<" ";
		}
		cout<<endl;
	}
	return 0;
}
