#include <iostream>
#include <vector>
using namespace std;

void nToNumber(vector<int>& result, int i, int number) {
    if (i < 1) return; 
    result[number - i] = i; 
    nToNumber(result, i - 1, number); 
}

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    vector<int> result(number); // Initialize vector with the size 'number'
    nToNumber(result, number, number);

    cout << "Generated vector elements:";
    for (int num : result) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}

