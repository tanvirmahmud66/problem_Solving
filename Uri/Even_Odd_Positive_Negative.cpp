#include<iostream>
using namespace std;

int main(){

    int n[5],pos=0,neg=0,even=0,odd=0;
    for(int i=0;i<5;++i){
        cin>>n[i];
        if(abs(n[i]%2)==0){
            even++;
        }else{
            odd++;
        }

        if(n[i]>0){
            pos++;
        }else if(n[i]<0){
            neg++;
        }
    }


    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;



    return 0;
}
