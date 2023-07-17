#include<bits/stdc++.h>
using namespace std;

//Node declaration
class Node{
public:
	int data;
	Node* next;
};


//printing linked list
void print(Node* n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n = n->next;
	}cout<<endl;
}


//Driver function
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
	
	//printin linked list
	print(one);

	//inserting a New Node in specific position in linked List
	int pos,value;
	cin>>pos>>value;
	Node* point = new Node();
	point->next = one;
	Node* n = one;
	int itr = 0;
	while(n!=NULL){
		++itr;
		if(itr+1==pos){
			Node* box = new Node();			
			box->data = value;
			box->next = n->next;
			n->next = box; 
		}
		n = n->next;
	}

	print(one);


	return 0;
}