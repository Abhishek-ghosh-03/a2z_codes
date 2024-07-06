#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int>nextpermute(vector<int>&vec){
	int index = -1;
	for(int i = vec.size()-2 ; i>=0 ;i--){
		if(vec[i]<vec[i+1]){
			index = i;
			break;
		}
	}
	if(index == -1){
		reverse(vec.begin(),vec.end());
		return vec;
	}
	for(int i = vec.size()-1;i>index ;i--){
		if(vec[i] > vec[index]){
			swap(vec[i],vec[index]);
			break;
		}
	}
	reverse(vec.begin()+index +1,vec.end());
        return vec;	
}
int main(){
	vector<int>vec = {1,3,2};
	vector<int> result = nextpermute(vec);
	for(auto it : result){
		cout<<it<<" ";
	}
	return 0;
}
