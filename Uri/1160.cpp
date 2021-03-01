#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    int pa,pb,count;
    double g1,g2;

    for(int i=0;i<t;i++){
        cin>>pa>>pb>>g1>>g2;
        count=0;
        while(pa<=pb){
            pa=pa+((pa*g1)/100);
            pb=pb+((pb*g2)/100);
            ++count;
            if(count>100){
                break;
            }
        }

        if(count<=100){
            cout<<count<<" anos."<<endl;
        }else{
            cout<<"Mais de 1 seculo."<<endl;
        }


    }



    return 0;
}
