#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int singleoccurence(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        
        // Check if arr[mid] is the single non-duplicate element
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }
        
        // Adjust search based on the position of mid relative to its neighbors
        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << singleoccurence(arr, n) << endl;
    return 0;
}
