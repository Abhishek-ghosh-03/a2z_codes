#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int>unionofarrays(vector<int>&vec, vector<int>&vec1){
	vector<int>Union;
	int i = 0 , j = 0;
	while(i<vec.size() && j<vec1.size()){
		if(vec[i] <= vec1[j]){
			if(Union.size() == 0 || Union.back() != vec[i]){
				Union.push_back(vec[i]);
			}
			i++;
		} else {
			if(Union.size() == 0 || Union.back() != vec1[i]){
				Union.push_back(vec1[i]);
			}
			j++;
		}
	}
	while(i<vec.size()){
		if(Union.back() != vec[i]){
			Union.push_back(vec[i]);
		}
		i++;
	}
	while(j<vec1.size()){
		if(Union.back() != vec1[i]){
			Union.push_back(vec1[i]);
		}
		j++;
	}
	return Union;
}
int main(){
	int n ;
	cout<<"Enter the number: \n"<<endl;
	cin>>n;
	vector<int>vec1 = {1,1,2,2,2,4,5,6,7,7,};
	vector<int>vec(n);
	for(int i = 0;i<n ;i++){
		int value;
		cout<<"Enter the value: \n"<<endl;
		cin>>value;
		vec[i] = value;
	}
	vector<int>findunion = unionofarrays(vec,vec1);
	for( auto it : findunion){
		cout<<it<<" ";
	}
	return 0;
}
