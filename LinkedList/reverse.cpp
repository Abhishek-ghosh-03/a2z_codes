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
Node* reverse(Node* head){
	if(head == nullptr) return nullptr;
	Node* temp = head;
	Node* back = nullptr;
	while( temp != nullptr){
		temp->prev = bac
		temp=temp->next;
	}
}
void printDLL(Node* head){
	while(head!=nullptr){
		cout<<head->data<<"->"<<endl;
		head=head->next;
	}
}
int main(){
	int arr[] = {2,3,4,5};
	Node* head = nullptr;
	for(int i = 0;i<5;i++){
		head = reverse(arr[i],head);
	}
	printDLL(head);
	return 0;
}
