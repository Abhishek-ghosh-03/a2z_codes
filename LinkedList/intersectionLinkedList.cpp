#include <bits/stdc++.h>
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

Node* intersection(Node* head1, Node* head2) {
    Node* d1 = head1;
    Node* d2 = head2;
    while (d1 != d2) {
        d1 = (d1 == nullptr) ? head2 : d1->next;
        d2 = (d2 == nullptr) ? head1 : d2->next;
    }
    return d1;
}

int main() {
    // Creating two linked lists with an intersection
    vector<int> nums1 = {4, 1};
    vector<int> nums2 = {5, 6, 1};
    vector<int> common = {8, 4, 5};

    Node* head1 = createLinkedList(nums1);
    Node* head2 = createLinkedList(nums2);
    Node* commonHead = createLinkedList(common);

    // Attaching the common part to both lists
    Node* temp = head1;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = commonHead;

    temp = head2;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = commonHead;

    Node* intersectNode = intersection(head1, head2);

    if (intersectNode) {
        cout << "Intersection at node with value: " << intersectNode->data << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}

