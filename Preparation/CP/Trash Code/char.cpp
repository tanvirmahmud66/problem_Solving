#include<bits/stdc++.h>
using namespace std;


int main(){

	char ch;
	cin>>ch;

	// checking the char is Uppercase or Lowercase
	if('a'<=ch && 'z'>=ch){
		cout<<"Lowercase"<<endl;
		ch = ch-'a'+'A';
		cout<<"In Uppercase: "<<ch;
	}else{
		cout<<"Upercase"<<endl;
		ch = ch+'a'-'A';
		cout<<"In lowercase: "<<ch;
	}


	char s;
	cin>>s;

	int n = s-'0';
	cout<<endl<<n;







	return 0;
}