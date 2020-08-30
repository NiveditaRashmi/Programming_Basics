//Program to implement the basic operations of a SinglyLinked List.
//geeksforgeeks
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
};

//Adding new nodes into the LL at the beginning.
void add_startNode(Node **head, int data) {
	Node *new_node = new Node();
	new_node->data = data;
	new_node->next = *head;
	*head = new_node;
}

//Adding a new node in the end of a Singly Linked List.
void add_endNode(Node **head, int data) {
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = NULL;
	Node* current = (*head);
	if(*head == NULL) {
		*head = new_node;
		return;
	}
	while(current->next != NULL) {
		current = current->next;
	}
	current->next = new_node;
	return;
}

//Adding a new node after a given node.
void add_afterNode(Node* prev_node, int data) {
	Node* new_node = new Node();
	new_node->data = data;
	if(prev_node == NULL ) {
		cout << "cannot be inserted ";
		return;
	}
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return;
}


//To print the list.
void printList(Node *n) {
	while(n !=NULL) {
		cout << n->data << "->";
		n = n->next;
	}
	if(n == NULL) {
		cout << "NULL"; 
	}
	
}


int main()  {
	Node *head = NULL;
	add_startNode(&head, 2);
	add_startNode(&head, 3);
	add_endNode(&head, 9);
	add_afterNode(head->next, 7);
	printList(head);
	return 0;
}

