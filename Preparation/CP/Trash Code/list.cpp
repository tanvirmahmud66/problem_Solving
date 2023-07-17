#include<bits/stdc++.h>
using namespace std;


int main(){

	list<int> l; // list declarization

	//---------------------Inserting value in list----------------------------------------
	int n=5;
	while(n!=0){
		l.push_back(n--); //insert a valur in list using push_back() member function 
	}


	//---------------------Iterator for list----------------------------------------------
	list<int>:: iterator it = l.begin(); //declaring a iterator for list and assigning first pointer of list



	//---------------------loop for printing value of list--------------------------------
	for(it = l.begin();it!=l.end();it++){
		cout<<*it<<" ";
	}cout<<endl;


	//-------------------------Range based loop for printing value of list-----------------
	for(auto &val: l){
		cout<<val<<" ";
	}cout<<endl;
	

	//------------------------Declaring a list of pair--------------------------------------
	list<pair<int,int>> l_p;

	
	//------------------------inserting pair in the list------------------------------------
	int n2=5;
	while(n2!=0){
		l_p.push_back(make_pair(n2--,n2));
	}


	//------------------------Printing pair from the list using range based for loop--------
	for(auto val: l_p){
		cout<<val.first<<" "<<val.second<<endl;
	}



	return 0;
}