#include<bits/stdc++.h>
using namespace std;

string kangaroo(int x1,int v1,int x2,int v2){
	bool b;
	if(v1==v2){
		return "NO";
	}else{
		int reach1 = x1,reach2=x2;
		if(reach1<reach2){
			while(reach1<reach2){
				reach1+=v1;
				reach2+=v2;
				if(reach1>reach2){
					b=false;
				}else if(reach1==reach2){
					b=true;
				}
			}
		}else{
			while(reach2<reach1){
				reach2+=v2;
				reach1+=v1;
				if(reach2>reach1){
					b=false;
				}else if(reach2==reach1){
					b=true;
				}
			}
		}
	}
	if(b==true){
		return "YES";
	}else{
		return "NO";
	}
}


int main(){
	int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    cout<<kangaroo(x1,v1,x2,v2);
}