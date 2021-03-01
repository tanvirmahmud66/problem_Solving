#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int X,Y;
    cin>>X>>Y;
    double price;

    switch(X){
        case 1:
            price = 4.00*Y;
            break;
        case 2:
            price = 4.50*Y;
            break;
        case 3:
            price = 5.00*Y;
            break;
        case 4:
            price = 2.00*Y;
            break;
        case 5:
            price = 1.50*Y;
            break;
    }

    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Total: R$ "<<price<<endl;




    return 0;
}
