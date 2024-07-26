#include <bits/stdc++.h>
using namespace std;

// Comparator to sort items based on value/weight ratio in descending order
bool comp(vector<int>& a, vector<int>& b) {
    double r1 = (double)a[0] / a[1];
    double r2 = (double)b[0] / b[1];
    return r1 > r2;
}

// Function to solve the Fractional Knapsack problem
double solve(vector<vector<int>>& nums, int w, int n) {
    // Sort the items based on value/weight ratio
    sort(nums.begin(), nums.end(), comp);

    int curr = 0;
    double finalval = 0.0;

    // Traverse the sorted items
    for (int i = 0; i < n; i++) {
        // If the whole item can be taken
        if (curr + nums[i][1] <= w) {
            curr += nums[i][1];
            finalval += nums[i][0];
        } else {
            // Take the fraction of the remaining weight
            int remain = w - curr;
            finalval += nums[i][0] * ((double)remain / nums[i][1]);
            break; // Since we can't add more items after taking a fraction
        }
    }
    
    return finalval;
}

int main() {
    int n = 3, weight = 50;
    vector<vector<int>> nums = {{100, 20}, {60, 10}, {120, 30}};
    double ans = solve(nums, weight, n);
    cout << ans << ": The maximum value" << endl;
    return 0;
}

