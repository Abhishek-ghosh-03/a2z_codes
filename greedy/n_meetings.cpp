#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct meeting{
	int start;
	int end;
	int pos;
};

class solution{
	public:
		bool static comparator(struct meeting m1, meeting m2) {
         		if (m1.end < m2.end) return true;
         		else if (m1.end > m2.end) return false;
         		else if (m1.pos < m2.pos) return true;
         		return false;
      		}
		void maxmeets(int s[] , int e[] , int n){
			struct meeting meet[n];
			for(int i = 0;i<n;i++){
				meet[i].start = s[i] , meet[i].end = e[i] , meet[i].pos = i+1;
			}
			sort(meet,meet + n , comparator);
			vector<int>ans;
			int limit = meet[0].end;
			ans.push_back(meet[0].pos);
			for(int i = 1 ;i<n;i++){
				if(meet[i].start > limit){
					limit = meet[i].end;
					ans.push_back(meet[i].pos);
				}
			}
			for(int i =0 ;i<ans.size() ;i++){
				cout<<ans[i]<<endl;
			}
		}
};
int main(){
	solution obj;
	int n = 6;
	int start[] = {1,3,0,5,8,5};
	int end[] = {2,4,5,7,9,9};
	obj.maxmeets(start,end,n);
	return 0;
}
