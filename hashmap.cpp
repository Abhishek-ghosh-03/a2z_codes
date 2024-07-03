#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void hashmap_freq(int arr[] ,int number){
	unordered_map<int,int>map;
	for(int i = 0; i< number ; i++){
		map[arr[i]]++;
	}
	int maxElement = 0, maxCount = 0, minCount = number, minElement =0;

	for(auto it : map){
		int count = it.second ;
		int element = it.first ;
		if (count>maxCount){
			maxCount = count;
			maxElement = element;
		}
		if(count<minCount){
			minCount = count;
			minElement = element;
		}
	}
	cout<<maxElement<<" "<<minElement;
}
int main(){
	int number ;
	cout<<"Enter the number"<<endl;
	cin>>number;
	int arr[number] = {1,2,2,4,4,4,5,7};
	hashmap_freq(arr , number);
	return 0;
}
