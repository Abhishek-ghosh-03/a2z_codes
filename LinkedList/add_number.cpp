#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
	public:
	int data ;
	Node* next;
	Node(int data1){
		data = data1;
	}
};
Node* createLinkedList(vector<int>&nums){
	Node* head = nullptr , *tail = nullptr;
	for(auto it : nums){
		Node* temp = new Node(it);
		if(!head){
			head = temp ;
			tail = temp ;
		} else {
			tail->next = temp;
			tail = temp;
		}
	}
	return head;
}
Node* add_number_at_end(Node* head){
	Node* temp = head;
	while(temp->next != nullptr){
		temp=temp->next;
	}
	temp->data = temp->data + 1;
	return head;
}
void printLL(Node* head){
	Node* temp = head;
	while(temp != nullptr){
		cout<<temp->data<<" " << endl;
		temp = temp->next;
	}
}
int main(){
	vector<int>nums = {1,2,4};
	Node* head = createLinkedList(nums);
	head = add_number_at_end(head);
	printLL(head);
	return 0;
}
