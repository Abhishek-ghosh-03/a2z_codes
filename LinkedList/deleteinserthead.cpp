#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
public : 
	int data ;
	Node* next ;
	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}
	Node(int data1){
		data = data1;
		next = nullptr;
	}
};
Node* insertHead(Node* head , int val){
	Node* newNode = new Node(val);
	if(head == nullptr) return newNode;
	newNode->next = head;
	return newNode;

}

Node* deleteHead(Node* head){
	Node* temp = head;
	head = temp->next;
	delete temp;
	return head;
}
void printLL(Node* head){
	while(head!=nullptr){
		cout<<head->data<<"->"<<endl;
		head = head->next;
	}
}
int main(){
	vector<int>nums ={12,7,9,34};
	Node* head = nullptr;
	for(auto it : nums){
		head = insertHead(head,it);
	}
	printLL(head);
	head = deleteHead(head);
	printLL(head);
	return 0;	
}
