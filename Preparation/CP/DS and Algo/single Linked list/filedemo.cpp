#include<bits/stdc++.h>
#include<fstream>
#include<iostream>
using namespace std;

int main(){

	// ofstream myfile("Tanvir Fahim.txt");

	// myfile<<"Hello Tanvir Mahmud Fahim, Stamford university Bangladesh computer science and engineering";	
	// myfile.close();

	string text;

	ifstream myfile1("Tanvir Fahim.txt");
	while(getline(myfile1,text)){
		cout<<text;
	}

	return 0;
}