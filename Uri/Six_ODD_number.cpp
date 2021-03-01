#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    int x,count=0;
    cin>>x;
    do{

            if(x%2!=0){
                cout<<x<<endl;
                ++count;
            }
            ++x;
        }while(count!=6);




    return 0;
}

