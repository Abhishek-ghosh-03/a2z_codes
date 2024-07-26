/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	vector<int>nums = {1,2,5,1,0,20,50,100,500,1000};
	int v ;
	cin>>v;
	vector<int>ans;
	for(int i = nums.size() - 1; i>= 0;i--){
		while(v >=nums[i]){
			v -= nums[i];
			ans.push_back(nums[i]);
		}
	}
	cout<<ans.size()<<endl;
	return 0;
}*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int v;
    cin >> v;
    vector<int> ans;

    // Greedily find the minimum number of coins
    for (int i = nums.size() - 1; i >= 0; i--) {
        while (v >= nums[i]) {
            v -= nums[i];
            ans.push_back(nums[i]);
        }
    }

    // Output the result
    cout << "Coins used: ";
    for (int coin : ans) {
        cout << coin << " ";
    }
    cout << endl;

    cout << "Number of coins: " << ans.size() << endl;

    return 0;
}

