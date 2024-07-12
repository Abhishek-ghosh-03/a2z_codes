#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
	public :
		int data;
		Node* next;
		Node(int data1){
			data = data1;
			next = nullptr;
		}
};
Node* createLinkedList(vector<int>&nums){
	Node* head = nullptr , *tail = nullptr;
	Node* temp = head ;
	for(int i = 0;i<nums.size();i++){
		if(!head){
			head = temp;
			tail =  temp;
		} else {
			tail->next = temp;
			tail = temp;
		}
	}
	return head;
}
Node* reverseLinkedList(Node* head){
	if(head == nullptr || head->next == nullptr){
		return head;
	}
	Node* temp = reverseLinkedList(head->next);
	Node* front = head->next;
	front->next = head;
	head->next = nullptr;
	return temp;

}
bool palindrome(Node* head){
	if(head == nullptr) return false;
	Node* slow = head , *fast = head;
	while(fast != nullptr && fast->next != nullptr){
		slow=slow->next;
		fast=fast->next->next;
	}
	//Node* newHead = slow->next ;
	Node* newHead = reverseLinkedList(slow->next);
	Node* first = head , *second = newHead;
	while(second!=nullptr){
		if(first->data != second->data){
			reverseLinkedList(newHead);
			return false;
		}
		first=first->next;
		second=second->next;
	}
	reverseLinkedList(newHead);
	return true;
}
/*
void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}*/
int main(){
	vector<int>nums = {1,2,2,1};
	Node* head = createLinkedList(nums);
	if(palindrome(head)){
		cout<<"True";
	} else {
		cout<<"False";
	}
	//printLL(head);
	return 0;
}
