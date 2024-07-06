#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> findDivisor(int num){
	vector<int>result;
	for(int i = 1 ;i*i<num ; i++){
		if(num%i == 0){
			result.push_back(i);
			if(i!= num/i){
				result.push_back(num/i);
			}
		}
	}
	return result;
}

int main(){
	int number;
	cout<<"Enter the number:"<<endl;
	cin>>number;
	vector<int>divisors = findDivisor(number);
	for( int div : divisors){
		cout<<div<<endl;
	}

	return 0;
}
