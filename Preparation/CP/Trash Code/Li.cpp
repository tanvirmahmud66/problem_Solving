#include<bits/stdc++.h>
using namespace std;


void print(list<int> L){
	for(auto it = L.begin();it!=L.end();++it){
		cout<<*it<<" ";
	}cout<<endl;
}



int main(){
	
	//----------------------Declaring a List.
	list<int> L;


	//----------------------Pre Filling 10 item with 0 in the list L.
	L.assign(10,0);
	print(L);


	//----------------------pointing specific location in the List L.	
	list<int>::iterator it = L.begin();
	advance(it,4);


	//----------------------Inserting one element in which location that iterator it currently pointing
	L.insert(it,1);
	print(L);


	L.insert(it,4,19);
	print(L);


	//----------------------Size of the List
	cout<<L.size()<<endl;

	//----------------------sorting the list
	L.sort();
	print(L);

	//----------------------clearing the List
	L.clear();
	print(L);




	return 0;
}