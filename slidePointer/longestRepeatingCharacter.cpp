#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int longestRepeatingCharacter(vector<char>&ch , int k){
	int left = 0 , right = 0, maxLen = 0, maxF= 0;
	unordered_map<char, int > hashmap;
	while(right < ch.size()){
		hashmap[ch[right] - 'A']++;
		maxF = max(maxF , hashmap[ch[right]]);
		while((right-left+1)-maxF > k){
			hashmap[ch[left] -'A']--;
			maxF = 0;
			for(int i = 0;i<26;i++){
				maxF = max(maxF , hashmap[i]);
			}
			left++;
		}
		if((right-left+1) - maxF <= k){
			maxLen = max(maxLen , right-left+1);
		}
		right++;
	}
	return maxLen;
}
/*
int longestRepeatingCharacter(vector<char>&ch , int k){
	
	int maxF = 0, changes = 0 ,maxLen = 0;
	for(int i = 0;i<ch.size() ;i++){
		unordered_map<char,int>hashmap;
		for(int j = i ;j<ch.size() ; j++){
			hashmap[ch[j]]++;
			maxF = max(maxF , hashmap[ch[i]]);
			changes = (j-i+1) - maxF;
			if(changes <= k){
				maxLen = max(maxLen , j-i+1);
			} else {
				break;
			}
		}
	}
	return maxLen;
}
*/
int main(){
	vector<char>ch = {'A','B','A','B'};
	int k = 2;
	cout<<longestRepeatingCharacter(ch,k)<<endl;
	return 0;
}
