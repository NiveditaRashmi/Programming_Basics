//This program implments the deletion operation in a singly linked list
#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
};

//Deletes the first occurence of key in Linked List
void delete_keyNode(Node** head, int key) {
	Node* temp = (*head), *prev;
	if(temp && temp->data == key) {
		*head = temp->next;
		delete(temp);
		return;
	}
	while(temp && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}
	if(!temp) return;
	prev->next = temp->next;
	delete(temp);
	cout << key << " deleted from the linked list\n";
 	
}

//deletes the list
void deleteList(Node** head) {
	Node* current = *head;
	Node* temp = NULL;
	while(current) {
		temp = current->next;
		delete(current);
		current = temp;
	}
	*head = NULL;
}



//adds a node at the start of LL
void add_startNode(Node** head, int data) {
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = (*head);
	*head = new_node;
}

//Prints the elements of the linked list
void printList(Node* head){
	if(!head)  cout << "List is empty\n";	
	while(head) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

//To delete a node from a given position
void delete_PosNode(Node** head, int pos) {
	if(*head == NULL) return;
	Node* temp = *head;
	if(pos == 0 ){
		*head = temp->next;
		delete(temp);
		return;
	}
	while(!(pos--)){
		temp = temp->next;
	}
	if(!temp || !temp->next) return;
	
	Node* del = temp->next;
	temp->next = temp->next->next;
	cout << del->data << " deleted from the list\n";
	delete(del);
	return;
	
}


int main() {
	Node* head = NULL;
	add_startNode(&head, 2);
	add_startNode(&head, 6);
	add_startNode(&head, 3);
	add_startNode(&head, 4);
	printList(head);
	delete_keyNode(&head, 6);
	printList(head);
	delete_PosNode(&head, 1);
	printList(head);
	deleteList(&head);
	printList(head);
	return 0;
}
