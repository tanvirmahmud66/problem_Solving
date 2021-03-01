#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double s,sal=0,er=0;
    int per=0;
    cin>>s;

    if(s>=0 && s<=400.00){
        er = (15*s)/100;
        sal = s+er;
        per = 15;

    }
    else if(s>=400.01&&s<=800.00){
        er = (12*s)/100;
        sal = s+er;
        per = 12;
    }
    else if(s>=800.01&&s<=1200.00){
        er = (10*s)/100;
        sal = s+er;
        per = 10;
    }
    else if(s>=1200.01&&s<=2000.00){
        er = (7*s)/100;
        sal = s+er;
        per = 7;
    }
    else if(s>2000.00){
        er = (4*s)/100;
        sal = s+er;
        per = 4;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << sal << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << (sal - s) << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << per << " %" << endl;





    return 0;
}


