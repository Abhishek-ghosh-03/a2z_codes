#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<vector<int>> threesums(vector<int> &vec){
	vector<vector<int>> ans ;
	sort(vec.begin(), vec.end());
	for(int i=0;i<vec.size();i++){
		if(i!=0 && vec[i] == vec[i-1]) continue;

		int j = i+1 , k =  vec.size()-1;
		while(j<k){
			int sum =  vec[i] + vec[j] + vec[k];
			if(sum>0){
				k--;
			} else if(sum<0){
				j++;
			} else if(sum == 0){
				ans.push_back({vec[i],vec[j],vec[k]});
				j++,k--;
				while(j<k && vec[j] == vec[j-1]) j++;
				while(j<k && vec[k] == vec[k-1]) k--;
			}
		}
	}
		return ans;
}
int main(){
	vector<int>vec = {-1,0,1,2,-1,4};
	vector<vector<int>>ans = threesums(vec);
	for (auto triplet : ans) {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
       	 }
       		 cout << "] ";
   	 }
    	cout << endl;
	return 0;
}
