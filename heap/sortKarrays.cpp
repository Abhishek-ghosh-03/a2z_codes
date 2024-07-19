#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Element {
    int value;
    int arrayIndex;
    int elementIndex;
};

struct Compare {
    bool operator()(Element const& a, Element const& b) {
        return a.value > b.value;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>& arrays) {
    priority_queue<Element, vector<Element>, Compare> minHeap;
    vector<int> result;
    
    for (int i = 0; i < arrays.size(); ++i) {
        if (!arrays[i].empty()) {
            minHeap.push({arrays[i][0], i, 0});
        }
    }
    
    while (!minHeap.empty()) {
        Element current = minHeap.top();
        minHeap.pop();
        
        result.push_back(current.value);
        
        if (current.elementIndex + 1 < arrays[current.arrayIndex].size()) {
            minHeap.push({arrays[current.arrayIndex][current.elementIndex + 1], current.arrayIndex, current.elementIndex + 1});
        }
    }
    
    return result;
}

int main() {
    vector<vector<int>> arrays = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };
    
    vector<int> result = mergeKSortedArrays(arrays);
    
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}

