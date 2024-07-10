#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
        public:
        int data ;
        Node* next;
        Node* prev;
        Node(int data1, Node* next1 , Node* prev1){
                data = data1;
                next = next1;
                prev = prev1;
        }
        Node(int data1){
                data = data1;
                next = nullptr;
                prev = nullptr;
        }
};
Node* insertHead(Node* head , int val){
        Node* newnode = new Node(val);
        if(head == nullptr) return newnode;
        head->prev = newnode;
        newnode->next = head;
        return newnode;
}
Node* deleteHead(Node* head,int val){
	if(head == nullptr || head->next == nullptr) return nullptr;
	Node* temp = head;
	head = temp->next;
	head->prev = nullptr;
	delete temp;
	return head;
}
Node* insertTail(Node* head , int val){
        Node* newnode = new Node(val);
        if(head == nullptr) return newnode;
        Node* temp = head;
        while(temp->next != nullptr){
                temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
        return head;
}
Node* deleteTail(Node* head){
	if(head == nullptr || head->next == nullptr) return nullptr;
	Node* temp = head;
	while(temp->next !=nullptr){
		temp=temp->next;
	}
	temp->prev->next = nullptr;
	temp->prev = nullptr;
	delete temp;
	return head;
}
void printDLL(Node* head){
        while(head!=nullptr){
                cout<<head->data<<"->"<<endl;
                head = head->next;
        }
}
int main(){
        Node* head = nullptr;
        vector<int>nums={12,7,9,34};
        for(auto it : nums){
                head = insertTail(head,it);
        }
	int val ;
	head = deleteTail(head);
        printDLL(head);
        return 0;
}
