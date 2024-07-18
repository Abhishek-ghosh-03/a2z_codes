#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 string minWindow(string s1, string s2) {

        int n = s1.length(), m = s2.length();
        int mini = INT_MAX, start = -1;

        string ans = "";

        for(int i = 0; i <= n - m; i++){
            if(s1[i] != s2[0]){
                continue;
            }
            else{
                int p = i, j = 0;
                while(p < n && j < m){
                    if(s1[p] == s2[j]){
                        j++;
                    }
                    p++;
                }
                p--;
                int cur = p - i + 1;
                if(j == m && cur < mini){
                    mini = cur;
                    start = i;
                }
            }
        }

        if(start == -1)return "";
        return s1.substr(start, mini);
    }
/*
string minimumWindowSequence(string str1 , string str2){
	int n = str1.length() , m = str2.length();
	int mini = INT_MAX , start = -1;
	for(int i = 0;i<=(n-m) ;i++){
		if(str1[i] != str2[0]){
			continue;
		} else {
			int p = i , j =0;
			while(j<m && p<n){
				if(str1[p] == str2[j]){
					j++;
				}
				p++;
			}
			p--;
			int curr = p - i+ 1;
			if(j == m && curr < mini){
				mini = curr;
				start = i;
			}
		}
	}
	if( start == -1) return "";
	return str1.substr(start,mini);
}*/
 int main(){
 	string str1 = "ADOBECODEBANC" , str2 = "ABC";
	string output = minWindow(str1, str2);
	cout<< output << endl;
	return 0;
 }
