#include<bits/stdc++.h>
using namespace std;


class car{
private:
	int n;
public:
	car(){
		n = 0;
	}
	void show(){
		cout<<n<<endl;
	}
	friend void add(car& x);
};

void add(car& x){
	x.n = x.n+10;
}


int main(){

	car c;
	c.show();
	add(c);
	c.show();

	return 0;
}