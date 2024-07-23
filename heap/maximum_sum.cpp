#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> maximum_sum(vector<int>&nums1 , vector<int>&nums2){
	sort(nums1.begin() , nums1.end());
	sort(nums2.begin() , nums2.end());

	int K = 2;
	int N = nums1.size();

	priority_queue<pair<int,pair<int,int>>>pq;
	set<pair<int,int>>s;
	vector<int>ans;
	pq.push({nums1.back() + nums2.back() , {N-1,N-1}});
	s.insert({N-1,N-1});
	while(K--){
		auto p = pq.top();
		int sum = p.first;
		int x = p.second.first;
		int y = p.second.second;

		ans.push_back(sum);
		pq.pop();

		if(s.find({x-1,y}) == s.end()){
			pq.push({nums1[x-1]+nums1[y],{x-1,y}});
			s.insert({x-1,y});
		} 
		if(s.find({x,y-1}) == s.end()){
			pq.push({nums1[x]+nums2[y-1],{x,y-1}});
			s.insert({x,y-1});
		}
	}
	return ans;

}
int main(){
	vector<int>nums1 = {1,4,2,3};
	vector<int>nums2 = {2,5,1,6};

	vector<int>result = maximum_sum(nums1,nums2);
	for(auto it : result){
		cout<< it << endl;
	}
	return 0;
}
