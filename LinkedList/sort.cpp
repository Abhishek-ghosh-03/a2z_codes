#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* mergeLL(Node* left, Node* right) {
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;

    while (left != nullptr && right != nullptr) {
        if (left->data < right->data) {
            temp->next = left;
            left = left->next;
        } else {
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }
    
    if (left != nullptr) {
        temp->next = left;
    } else {
        temp->next = right;
    }

    return dummyNode->next;
}

Node* findmiddle(Node* head) {
    if (head == nullptr || head->next == nullptr) return head;
    Node* slow = head;
    Node* fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* sortLL(Node* head) {
    if (head == nullptr || head->next == nullptr) return head;

    Node* middle = findmiddle(head);

    Node* right = middle->next;
    middle->next = nullptr;
    Node* left = head;

    left = sortLL(left);
    right = sortLL(right);

    return mergeLL(left, right);
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* createLinkedList(vector<int>& nums) {
    Node* head = nullptr, *tail = nullptr;
    for (auto it : nums) {
        Node* temp = new Node(it);
        if (!head) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }
    return head;
}

int main() {
    vector<int> nums = {4, 2, 1, 3, 5};
    Node* head = createLinkedList(nums);

    cout << "Original Linked List: ";
    printLL(head);

    head = sortLL(head);

    cout << "Sorted Linked List: ";
    printLL(head);

    return 0;
}

