#include<bits/stdc++.h>
using namespace std;

//Node declaration
class Node{
public:
	int data;
	Node* next;
};

void print(Node* n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n = n->next;
	}cout<<endl;
}


// driver
int main(){

	//creating few node and memory allocation with new keyword
	Node* one = new Node();
	Node* two = new Node();
	Node* three = new Node();
	Node* four = new Node();
	Node* five = new Node();
	Node* six = new Node();

	//assigning value in Node and connect each Node with link	
	one->data = 100;
	one->next = two;
	two->data = 200;
	two->next = three;
	three->data = 300;
	three->next = four;
	four->data = 400;
	four->next = six;
	six->data = 600;
	six->next = five;
	five->data = 500;
	five->next = NULL;

	//print whole linked List
	Node* n = one;
	while(n!=NULL){
		cout<<n->data<<" ";
		n = n->next;
	}cout<<endl;

	//printing liked list using function()
	print(one);
	print(four);



	return 0;
}