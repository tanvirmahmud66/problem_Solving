#include<bits/stdc++.h>
using namespace std;

class car{
public:
	int speed(int maxSpeed);
};

int car::speed(int maxspeed){
	return maxspeed;
}

int main(){

	car ob;
	cout<<ob.speed(200);

	return 0;
}