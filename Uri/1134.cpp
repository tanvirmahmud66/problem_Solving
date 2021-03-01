#include<iostream>
using namespace std;


int main(){

    int al=0,ga=0,di=0;
    int i;
    while(true){
        cin>>i;
        switch(i){
            case 1:
                ++al;
                break;
            case 2:
                ++ga;
                break;
            case 3:
                ++di;
                break;
            case 4:
                cout<<"MUITO OBRIGADO"<<endl;
                cout<<"Alcool: "<<al<<endl;
                cout<<"Gasolina: "<<ga<<endl;
                cout<<"Diesel: "<<di<<endl;
                return 0;
                break;

        }
    }



    return 0;
}
