#include <iostream>
using namespace std;

int binary_recursive(int arr[], int k, int low, int high) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == k) {
        return mid;
    }
    if (arr[mid] > k) {
        return binary_recursive(arr, k, low, mid - 1);
    } else {
        return binary_recursive(arr, k, mid + 1, high);
    }
}

int main() {
    int arr[] = {-1, 0, 3, 5, 7, 8};
    int k = 5;
    cout << "The number found is at index: " << binary_recursive(arr, k, 0, 5) << endl;
    return 0;
}

