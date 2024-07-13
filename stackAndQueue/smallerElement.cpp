#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> findNextSmallerElements(const vector<int>& arr) {
    int n = arr.size();
    vector<int> nextSmaller(n, n); // Initialize with the size of the array
    stack<int> stk;

    for (int i = 0; i < n; ++i) {
        while (!stk.empty() && arr[stk.top()] > arr[i]) {
            nextSmaller[stk.top()] = i;
            stk.pop();
        }
        stk.push(i);
    }
    
    return nextSmaller;
}

int main() {
    vector<int> arr = {3, 1, 2, 4};
    vector<int> result = findNextSmallerElements(arr);

    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\nNext Smaller Elements: ";
    for (int idx : result) {
        if (idx == arr.size()) {
            cout << "-1 "; // No smaller element found
        } else {
            cout << arr[idx] << " ";
        }
    }
    cout << endl;

    return 0;
}

