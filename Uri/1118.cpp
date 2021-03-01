#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    float n,temp=0;
    int i=0;
    while(true){
        cin>>n;
        if(n>10||n<0){
            cout<<"nota invalida"<<endl;
        }else{
            temp+=n;
            ++i;

            if(i==2){
                cout<<fixed<<setprecision(2)<<"media = "<<temp/i<<endl;
                i=0;
                temp=0;
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                int j,k=0;
                bool b=true;
                while(b){
                    cin>>j;
                    if(j==1){
                        ++k;
                        b=false;
                    }else if(j==2){
                        return 0;
                    }else{
                        cout<<"novo calculo (1-sim 2-nao)"<<endl;
                        continue;
                    }
                }if(k=1){
                    continue;
                }
            }
        }
    }

    return 0;
}

