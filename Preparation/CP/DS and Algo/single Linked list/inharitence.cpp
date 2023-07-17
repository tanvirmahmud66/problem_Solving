#include<bits/stdc++.h>
using namespace std;

class person{
	public:
		string name;
};


class fahim:public person{
public:
	int age;
};

int main(){

	fahim ob;
	ob.name = "Tanvir Mahmud Fahim";
	ob.age = 25;

	cout<<ob.name<<endl;
	cout<<ob.age<<endl;

	return 0;
}