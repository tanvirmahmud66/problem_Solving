#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int codefor_1,unitsfor_1,codefor_2,unitsfor_2;
    float price1,price2;
    cin>>codefor_1>>unitsfor_1>>price1;
    cin>>codefor_2>>unitsfor_2>>price2;

    cout<<fixed;
    cout<<setprecision(2);

    float total=(unitsfor_1*price1)+(unitsfor_2*price2);
    cout<<"VALOR A PAGAR: R$ "<<total<<endl;





    return 0;
}
