#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(int data1 , Node* next1){
		data = data1;
		next = next1;
	}
	Node(int data1){
		data = data1;
		next = nullptr;
	}

};

Node* insertHead(Node* head , int val){
	Node* temp = new Node(val, head);
	return temp;
}

void printLL(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}
int main(){
	vector<int> nums = {12,8,5,7};
	int val = 100;

	Node* head = new Node(nums[0]);
	head->next = new Node(nums[1]);
	head->next->next = new Node(nums[2]);
	head->next->next->next = new Node(nums[3]);

	head = insertHead(head,val);
	printLL(head);

	return 0;
}
