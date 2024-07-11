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

int lengthofLinkedList(Node* slow) {
    Node* temp = slow;
    int count = 1;
    while (temp->next != slow) {
        count++;
        temp = temp->next;
    }
    return count;
}

int lengthLinkedList(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return lengthofLinkedList(slow);
        }
    }
    return 0;
}

int main() {
    // Creating a linked list with a loop for demonstration
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third; // Creating a loop here for demonstration

    int loopLength = lengthLinkedList(head);
    if (loopLength > 0) {
        cout << "Length of the loop is: " << loopLength << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    return 0;
}

