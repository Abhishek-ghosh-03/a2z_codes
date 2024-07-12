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

Node* removeDuplicate(Node* head) {
        Node* first = head;
	while(first != nullptr){
		Node* second = head->next;
		while(second != nullptr){
			if(first->data == second->data){
				Node* dummy = second->next;
				if(second->prev) second->prev->next = second->next;
				if(second->next) second->next->prev = second->prev;
			       	delete dummy;
				second = dummy;
			} else {
				second = second->next;
			}
		}
		first=first->next;	
	}
	return head;
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
    vector<int> nums = {1,1,2,3,1,4,5,5};
    Node* head = createLinkedList(nums);

    cout << "Original Linked List: ";
    printLL(head);
    head = removeDuplicate(head);
    printLL(head);
    
    cout << endl;

    return 0;
}
