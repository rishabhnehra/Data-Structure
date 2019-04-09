#include <iostream>
using namespace std;

class Stack{
	public:
	int top;
	int a[5];
	Stack(){
		top = -1;
	}
	bool push(int x){
		if (top <= 10 ){
			a[++top] = x;
			return true;
		}
		else{
			cout << "Stack Overflow" << endl;
			return false; 
		}
	}

	int pop(){
		if (top < 0){
			cout << "Stack Underflow" << endl;
			return 0;
		}
		else
			return a[top--];
	}

	int TopOfStack(){
		return a[top];
	}

	void printStack(){
		int b = top;
		while(b > -1){
			cout << a[b] << endl;
			b--;
		}
	}
};

int main(){
	Stack s;
	s.push(9);
	s.push(8);
	s.push(7);
	s.push(6);
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.printStack();
	cout << "   "<<endl;	
	s.pop();
	s.printStack();
	cout << "Top: " << s.TopOfStack() << endl;
	return 0;
}