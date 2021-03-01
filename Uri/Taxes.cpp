#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double sal,tax=0,t1,t2,t3,temp;
    cin>>sal;

    if(sal>=0.00 && sal<=2000.00){
        cout<<"Isento"<<endl;
    }else{

        if(sal>=2000.01&&sal<=3000.00){
            sal -=2000;
            tax = (8*sal)/100;
            cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
        }
        else if(sal>=3000.01&&sal<=4500.00){
            t1=sal-2000;
            t2=t1-1000;
            t1-=t2;
            tax = (8*t1)/100;
            temp = tax;
            tax=0;
            tax = (18*t2)/100;
            cout<<"R$ "<<fixed<<setprecision(2)<<tax+temp<<endl;
        }
        else if(sal>4500.00){
            //5000
            t1=sal-2000;//3000
            t2=t1-1000;//2000
            t3 = t2-1500;//500
            t1-=t2;//1000
            t2-=t3;//1500
            tax = (t1*8)/100;
            temp = tax;
            tax=0;
            tax = (t2*18)/100;
            temp+=tax;
            tax=0;
            tax=(t3*28)/100;
            temp+=tax;
            cout<<"R$ "<<fixed<<setprecision(2)<<temp<<endl;
        }
    }


    return 0;
}
