#include<iostream>
#include<string>
using namespace std;

int main(){

    string ch1,ch2,ch3;
    cin>>ch1>>ch2>>ch3;


    if(ch1=="vertebrado"){
        if(ch2=="ave"){
            if(ch3=="carnivoro"){
                cout<<"aguia"<<endl;
            }else if(ch3=="onivoro"){
                cout<<"pomba"<<endl;
            }
        }else if(ch2=="mamifero"){
            if(ch3=="onivoro"){
                cout<<"homem"<<endl;
            }else if(ch3=="herbivoro"){
                cout<<"vaca"<<endl;
            }
        }
    }else if(ch1=="invertebrado"){
        if(ch2=="inseto"){
            if(ch3=="hematofago"){
                cout<<"pulga"<<endl;
            }else if(ch3=="herbivoro"){
                cout<<"lagarta"<<endl;
            }
        }else if(ch2=="anelideo"){
            if(ch3=="hematofago"){
                cout<<"sanguessuga"<<endl;
            }else if(ch3=="onivoro"){
                cout<<"minhoca"<<endl;
            }
        }
    }



    return 0;
}


