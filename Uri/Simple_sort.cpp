#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }

    int arr2[3];
    for(int i=0;i<3;i++){
        arr2[i]=arr[i];
    }

    sort(arr,arr+3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        cout<<arr2[i]<<endl;
    }



    return 0;
}
