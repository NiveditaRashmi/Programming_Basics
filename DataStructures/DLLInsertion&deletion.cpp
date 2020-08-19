#include<iostream>
using namespace std;

class Node{

	public:
		int data;
		Node* prev;
		Node* next;
};
//Inserts a node at the beginnning of the DLL.
void push(Node** head_ref, int new_data){
	Node* new_node= new Node();
	new_node->data = new_data;
	new_node->next = *head_ref;
	new_node->prev = NULL;
	if(*head_ref != NULL){
		(*head_ref)->prev = new_node;
	}
	*head_ref = new_node;
}

//Inserts a node after the given previous node.
void insertAfter(Node* prev_node, int new_data){
	if(prev_node == NULL){
		cout<< "given previous node cannot be null\n";
		return;
	}
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->prev = prev_node;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	if(new_node->next != NULL){
		new_node->next->prev = new_node;
	}
}

//New node at the end of the linked list.
void append(Node** head_ref, int data){
	Node* new_node = new Node();
	Node* last = *head_ref;
	new_node->data = data;
	new_node->next = NULL;
	if(*head_ref == NULL){
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}
	while(last->next != NULL){
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
	return;
}

//deleting a node from the list. where pointer to head node pointer is given and pointer to the node ie. to be deleted is given.
void deleteNode(Node** head_ref, Node* del){
	if(*head_ref == NULL || del == NULL){
		return;
	}
	if(*head_ref == del){
		*head_ref = del->next;
	}
	if(del->next != NULL){
		del->next->prev = del->prev;
	}
	if(del->prev != NULL){
		del->prev->next = del->next;
	}
	delete(del);
	return;
}
//Funtion to reverse a DLL.
void reverse(Node** head_ref){
	Node* temp = NULL;
	Node* current = *head_ref;
	while(current != NULL){
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}
	if(temp != NULL){
		*head_ref = temp->prev;
	}
}
void printList(Node* node){
	Node* last;
	cout<< "\ntraversal in forward direction:\n";
	while(node != NULL){
		cout << node->data<< " ";
		last = node;
		node= node->next; 
	}
	cout << "\ntraversal in backward direction:\n";
	while(last!= NULL){
		cout << last->data<<" ";
		last= last->prev;
	}
}

int main() {
	Node* head=NULL;
	push(&head, 3);
	push(&head, 7);
	append(&head, 4),
	append(&head, 0);
	insertAfter(head->next, 9);
	
	printList(head);
	cout<<"hello\n";
	deleteNode(&head, head->next->next);
	printList(head);
	reverse(&head);
	printList(head);
	cout<<"by"<<endl;
	
	return 0;
}
