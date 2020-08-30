//Linked List implementation of Stack
//GeeksforGeeks
#include<iostream>
using namespace std;

class Stack {
	public:
		int data;
		Stack* next;
};

void push(Stack** head, int data) {
	Stack* new_node = new Stack();
	new_node->data = data;
	new_node->next= (*head);
	*head = new_node;
	cout << data << " pushed to the stack\n";
}

int isEmpty(Stack* head) {
	return !head;
}

int pop(Stack** head) {
	Stack* temp = *head;
	*head = (*head)->next;
	int val = temp->data;
	delete(temp);
	return val;
}

int peek(Stack* head) {
	if(isEmpty(head)) {
		return 0;
	} else {
		return head->data;
	}
}

int main() {
	Stack* head = NULL;
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	cout << pop(&head) << " popped fromt he stack\n";
	cout << peek(head) << " is the top element\n";
	return 0;
}
