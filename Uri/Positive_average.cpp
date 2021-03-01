#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int count=0;
    double arr[6],sum=0;
    for(int i=0;i<6;i++){
        cin>>arr[i];
        if(arr[i]>=0){
            ++count;
            sum += arr[i];
        }
    }

    cout<<fixed;
    cout<<setprecision(1);

    cout<<count<<" valores positivos"<<endl;
    double avg = sum/count;
    cout<<avg<<endl;


    return 0;
}

