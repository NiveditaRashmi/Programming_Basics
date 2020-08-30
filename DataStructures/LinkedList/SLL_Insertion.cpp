//This program implements singly linked list.
//Most of the code is inspired from GeeksforGeeks
#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
};
//adds a node at the start of LL
void add_startNode(Node** head, int data) {
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = (*head);
	*head = new_node;
}

//Adds a node at the end of the list
void add_endNode(Node** head, int data) {
	Node* new_node = new Node();
	new_node->data= data;
	Node* last = *head;
	new_node->next = NULL;
	if(*head == NULL) {
		*head = NULL;
	}
	while(last->next) {
		last = last->next;
	}
	last->next = new_node;
}

//Given a pointer to the previous node, this function adds a new node with give data after the previous node
void add_middleNode(Node* prev, int data) {
	Node* new_node = new Node();
	new_node->data = data;
	if(!prev) {
		cout << "insertion not possible";
		return;
	}
	new_node->next = prev->next;
	prev->next = new_node;
}

//Prints the elements of the linked list
void printList(Node* head){	
	while(head) {
		cout << head->data << " ";
		head = head->next;
	}
}


int main() {
	Node* head = NULL;
	add_startNode(&head, 2);
	add_startNode(&head, 6);
	add_endNode(&head, 3);
	add_endNode(&head, 4);
	add_middleNode(head->next->next, 7);
	printList(head);
	return 0;
}
