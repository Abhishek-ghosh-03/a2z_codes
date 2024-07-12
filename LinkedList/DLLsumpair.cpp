#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* createLinkedList(vector<int>& nums) {
    Node* head = nullptr, *tail = nullptr;
    for (int i = 0; i < nums.size(); i++) {
        Node* temp = new Node(nums[i]);
        if (!head) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    return head;
}

vector<pair<int, int>> pairSet(Node* head, int target) {
    vector<pair<int, int>> result;
    Node* first = head;
    while (first != nullptr) {
        Node* second = first->next;
        while (second != nullptr) {
            if (first->data + second->data == target) {
                result.push_back({first->data, second->data});
            }
            second = second->next;
        }
        first = first->next;
    }
    return result;
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> nums = {4, 5, 6, -1, -2, 3};
    Node* head = createLinkedList(nums);

    cout << "Original Linked List: ";
    printLL(head);

    int target = 4;
    vector<pair<int, int>> pairs = pairSet(head, target);

    cout << "Pairs with sum " << target << ": ";
    for (auto p : pairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}

