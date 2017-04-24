#include<iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};

Node *head = NULL;

void printList(struct Node *n){
	while(n != NULL){
		cout <<  n->data << "  ";
		n = n->next;
	}
	cout << endl;
}

void Insert(int data, int position){
	if(position == 0){
		Node *head = new Node();
		head->data = data;
		head->next = NULL;
	}
}

void InsertHead(int data){
	Node *temp = new Node();
	temp->data = data;
	temp->next = head;
	head = temp;
}

int main(){
	int n, data;
	cin >> n;

	for(int i = 0; i < n; i++){
		cout << "Enter the number : ";
		cin >> data;
		InsertHead(data);
		printList(head);
	}

	return 0;
}