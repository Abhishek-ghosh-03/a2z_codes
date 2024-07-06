#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*
bool isPrime(int n){
	for(int i = 2;i<n;i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;

}
int main(){
	int  num ;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	if(isPrime(num)){
		cout<<"Prime"<<num;
	} else {
		cout<<"Not Prime"<<num;
	}
	return 0;
}

////////

bool isPrime(int num){
	if(num >1 && num<3){
		return true;
	}
	if(num%2 == 0 || num%3 == 0){
		return false;
	}
	for(int i = 5 ; i*i < num ; i+=6){
		if(num%(i) == 0 && num%(i+2) == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int num;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	if(isPrime(num)){
		cout<<"Prime"<<num;
	} else {
		cout<<"Not Prime" << num;
	}
	return 0;
}

//////

void sieveoferathothenes(int num){
	vector<bool>isPrime(num+1, true);
	isPrime[0] = isPrime[1] =false;
	for(int i = 2;i*i<=num;++i){
		if(isPrime[i]){
			for(int p = i*i ;p <=num ;p+=i){
				isPrime[p] =false;
			}
		}
	}

	for(int i =2 ;i<num;i++){
		if(isPrime[i]){
			cout<<i;
		}
	}
}
int main(){
	int number ;
	cout<<"Enter the number:"<<endl;
	cin>>number;
	sieveoferathothenes(number);
	return 0;
}*/

void SimpleSieve(int limit , vector<int>primes){
	vector<bool>isPrime(limit+1, true);
	for(int i = 2;i*i<limit ; i++){
		if(isPrime[i]){
			for(int p = i*i ;p<=limit ;p+=i){
				isPrime[p] =false;
			}
		}
	}
	for(int i=2 ;i<=limit ;i++){
		if(isPrime[i]){
			primes.push_back(i);
		}
	}
}
void sieveoferathothenes(int m , int n){
	int limit = floor(sqrt(n)) +1;
	vector<int>primes;
	SimpleSieve(limit,primes);
	vector<bool>isPrime(n-m+1,true);
	for(int p : primes){
		int start = max(p*p,(m+p-1)/p*p);
		for(int j = start ; j<=n ;j+=p){
			isPrime[j-m] = false;
		}
	}
	for(int i =m ; i<n;i++){
		if(isPrime[i-m]){
			cout<<i<<endl;
		}
	}
}
int main(){
	int number,number1;
	cout<<"Enter the number :"<<endl;
	cin>>number>>number1;
	sieveoferathothenes(number,number1);
	return 0;
}
