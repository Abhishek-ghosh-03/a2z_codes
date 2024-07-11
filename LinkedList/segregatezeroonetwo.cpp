#include <iostream>
#include <vector>
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

Node* sortLinkedList(Node* head) {
    if (!head) return head; // Handle empty list

    Node* zerohead = new Node(-1);
    Node* onehead = new Node(-1);
    Node* twohead = new Node(-1);

    Node* zerotail = zerohead, *onetail = onehead, *twotail = twohead;
    Node* temp = head;

    while (temp) {
        Node* res = temp;
        temp = temp->next;
        res->next = nullptr;
        if (res->data == 0) {
            zerotail->next = res;
            zerotail = res;
        } else if (res->data == 1) {
            onetail->next = res;
            onetail = res;
        } else if (res->data == 2) {
            twotail->next = res;
            twotail = res;
        }
    }

    zerotail->next = (onehead->next) ? onehead->next : twohead->next;
    onetail->next = twohead->next;
    twotail->next = nullptr;

    Node* newHead = zerohead->next;

    delete zerohead;
    delete onehead;
    delete twohead;

    return newHead;
}

void printLL(Node* head) {
    while (head != nullptr) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

Node* createLinkedList(const vector<int>& nums) {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int num : nums) {
        Node* newNode = new Node(num);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 2, 0, 2, 2};
    Node* head = createLinkedList(nums);

    cout << "Original list: ";
    printLL(head);

    head = sortLinkedList(head);

    cout << "Sorted list: ";
    printLL(head);

    return 0;
}

