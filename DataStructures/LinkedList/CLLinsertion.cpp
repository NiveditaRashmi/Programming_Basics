#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

//Funtion to add a node at the beginning of a CLL.
void push(Node** head_ref, int data){
	Node* new_node = new Node();
	Node* temp= *head_ref;
	new_node->data = data;
	new_node->next = *head_ref;
	if(*head_ref != NULL){
		while(temp->next != *head_ref){
			temp=temp->next;
		}
		temp->next = new_node;
	}
	else{
		new_node->next = new_node;
	}
	*head_ref=new_node;
}

//print the elements of CLL.
void printList(Node* head){
	Node* temp = head;
	if(head != NULL){
		do{
			cout<< temp->data<<" ";
			temp=temp->next;
		}
		while(temp != head);
	}
}

int main() {
	Node* head = NULL;
	push(&head, 2);
	push(&head, 5);
	push(&head, 0);
	printList(head);
	return 0;
}
