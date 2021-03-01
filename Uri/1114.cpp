#include<iostream>
using namespace std;


int main(){

    int pass=2002;
    int inp;

    do{
        cin>>inp;
        if(inp==pass){
            cout<<"Acesso Permitido"<<endl;
            break;
        }else{
            cout<<"Senha Invalida"<<endl;
        }
    }while(inp!=pass);



    return 0;
}


