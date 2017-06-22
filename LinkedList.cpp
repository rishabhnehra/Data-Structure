#include <iostream>
using namespace std;

class Node {
	public:
		int value;
		Node *next;
};

class LinkedList
{
	public:
	Node *head;

	LinkedList(){
		head = NULL;
	}

	void append(int value){
		if(head == NULL){
			Node *newNode = new Node();
			newNode->value = value;
			newNode->next = NULL;
			head = newNode;
		}
		else{
			Node *current = head;
			while(current->next != NULL){
				current = current->next;
			}
			Node *newNode = new Node();
			newNode->value = value;
			newNode->next = NULL;
			current->next = newNode;
		}
	}

	void printList(){
		Node *current = head;
		while(current != NULL){
			cout << current->value << "->";
			current = current->next;
		}
		cout << "NULL" << endl;
	}

	void printHead(){
		cout << head->value << endl;
	}

	void deleteNode(int value){
		if(head->value == value){
			head = head->next;
		}
		else{
			Node *current = head;
			Node *previous;
			while(current->value != value){
				previous = current;
				current = current->next;
			}
			previous->next = current->next;
		}
	}

	int getPosition(int value){
		Node *current = head;
		int counter = 0;
		while(current->value != value){
			current = current->next;
			counter++;
		}
		return counter;
	}

	// void reverse(){
	// 	Node *temp,
	// }
};

int main(){
	LinkedList ll;
	ll.append(1);
	ll.append(2);
	ll.append(3);
	ll.append(4);
	ll.append(5);
	ll.printList();
	ll.printHead();
	ll.deleteNode(3);
	ll.printList();
	cout << ll.getPosition(5);

	return 0;
}
