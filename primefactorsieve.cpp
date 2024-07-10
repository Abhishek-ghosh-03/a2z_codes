#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int>sieve(int n){
	vector<bool>isPrime(n+1,true);
	isPrime[0] =isPrime[1] = false;
	for(int i = 2;i*i<= n ;i++){
		if(isPrime[i]){
			for(int j = i*i;j<=n ;j+=i){
				isPrime[j] = false;
			}
		}
	}
	vector<int>primes;
	for(int i =2;i<=n ;i++){
		if(isPrime[i]){
			primes.push_back(i);
		}
	}
	return primes;

}
vector<int> sieveprimefactor(int n){
	vector<int>primes = sieve(sqrt(n));
	vector<int>factors;
	for(int prime : primes){
		while(n%prime == 0){
			factors.push_back(prime);
			n/=prime;
		}
	}

	if(n>1) factors.push_back(n);

	return factors;
}
 int main(){
 	int n =12246 ;
	vector<int>result = sieveprimefactor(n);
	for(auto it : result){
		cout<<it<<endl;
	}
	return 0;
 }
