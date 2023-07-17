#include<bits/stdc++.h>
using namespace std;


void print(list<int> L){
	for(auto it = L.begin();it!=L.end();++it){
		cout<<*it<<" ";
	}cout<<endl;
}



int main(){
	
	//----------------------Declaring a List
	list<int> L;


	//----------------------value inserting in the end of list
	int x;
	while(cin>>x){
		L.push_back(x);
	}
	cout<<"Main List->   ";
	print(L);

	//----------------------Printing the first element of the list
	cout<<"First Element of the list->   ";
	cout<<L.front()<<endl;


	//----------------------Printing the last element of the list
	cout<<"Last Element of the list->   ";
	cout<<L.back()<<endl;



	//----------------------Reversing the list
	L.reverse();
	cout<<"After Reversing the List->   ";	
	print(L);


	//----------------------Checking either List is empty or Not empty
	if(L.empty()){
		cout<<"Empty"<<endl;
	}else{
		cout<<"Not Empty"<<endl;
	}


	//----------------------Printing the list after poping or deleting a element from end of the List
	L.pop_back();
	cout<<"After removing a element from end of the list->  ";
	print(L);



	//----------------------Printing the list after poping or deleting a element from begining of the List
	L.pop_front();
	cout<<"After removing a element from begining of the list->  ";
	print(L);



	return 0;
}