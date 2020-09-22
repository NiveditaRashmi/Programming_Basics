//This creates a Simple Linked List by inserting data in front, in between at the end of the LL.
#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
};

//Inserts a new node at the front of the LL.
void push(Node** head_ref, int new_data) {
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head_ref;
	(*head_ref) = new_node;
}

//Inserts a new node in between the LL.
void insertAfter(Node* prev_node, int new_data) {
	if(prev_node == NULL) {
		cout<< "given previous node cannot be null";
		return;
	}
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

//inserts a node at the end of the LL.
void append(Node** head_ref, int new_data) {
	Node* new_node = new Node();
	Node* last = *head_ref;
	new_node->data = new_data;
	new_node->next = NULL;
	if(*head_ref == NULL) {
		cout<<"hello"<<endl;
		*head_ref = new_node;
		return;
	}
	while(last->next != NULL) {
		last = last->next;
	}
	last->next = new_node;
	return;
}

//Deletes a node containing the value in the Linked List.
void deleteNode(Node** head_ref, int key) {
	Node* temp = *head_ref, *prev;
	if(temp != NULL && temp->data== key) {
		*head_ref = temp->next;
		delete(temp);
		return;
	}
	while(temp != NULL && temp->data != key) {
		prev = temp;
		temp = temp -> next;
	}
	if(temp == NULL) {
		return;
	}
	prev->next = temp->next;
	delete(temp);
}

//This deletes complete linked list
void deleteList(Node** head_ref){
	Node* current = *head_ref;
	Node* next;
	while(current != NULL){
		next = current->next;
		delete(current);
		current = next;
	}
	*head_ref = NULL;
}

//This counts number of nodes in the linked list.
int getCount(Node* head){
	int count = 0;
	Node* current = head;
	
	while(current != NULL){
		count++;
		current = current->next;
	}
	return count;
}
//Function to print the LL.
void printList(Node* n) {
	while(n!= NULL) {
		cout<< n->data << " ";
		n = n->next;
	}
}

int main() {
	Node* head = NULL;
	push(&head, 8);
	push(&head, 9);
	push(&head, 10);
	append(&head, 15);
	insertAfter(head->next, 12);
	printList(head);
	deleteNode(&head, 9);
	printList(head);
	cout << endl;
	getCount(head);
	cout<<endl;
	deleteList(&head);
	printList(head);
	cout << "afterdelete"<< getCount(head);
	
	return 0;
	
}
