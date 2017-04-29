#include<iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};

Node *head = NULL;

void printList(struct Node *n){
	while(n != NULL){
		cout <<  n->data << " - ";
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

	Node *temp = head;

	for(int i = 0; i < position; i++){
		temp = temp->next;
	}

	temp->data = data;
	temp->next = NULL;
}

void insertAfter(struct node* prev_node, int new_data)//Still needs working
{
    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}


void InsertHead(int data){
	Node *temp = new Node();
	temp->data = data;
	temp->next = head;
	head = temp;
}

int main(){
	int n, data;
	cin >> data;
	cin >> n;
	Insert(data, n);

	return 0;
}