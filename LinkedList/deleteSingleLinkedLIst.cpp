#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
public : 
	int data;
	Node* next;
	Node(int data1 , Node* head1){
		data = data1;
		next = head1;	
	}
};

Node* insertTail(int num , Node* head){
	Node* newNode = new Node(num,nullptr);
	if(head == nullptr) return newNode;

	Node* temp = head;
	while(temp->next != nullptr){
		temp=temp->next;
	}
	temp->next = newNode;
	return head;
}
Node* deleteTail(Node* head){
	if(head == nullptr || head->next == nullptr) return nullptr;
	Node* element = head;
	while(element->next->next != nullptr){
		element=element->next;
	}
	delete element->next;
	element->next = nullptr;
	return head;
}
void printLL(Node* head){
	while(head!=NULL){
		cout<<head->data<<"->"<<endl;
		head = head->next;
	}
	cout<<endl;
}
int main(){
	vector<int>nums ={12,7,9,34};
	Node* head = nullptr;
	for(int it : nums){
		head = insertTail(it,head);
	}
	printLL(head);

	head = deleteTail(head);
	printLL(head);
	return 0;
}
