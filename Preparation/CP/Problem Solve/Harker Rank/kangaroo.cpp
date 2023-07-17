#include<bits/stdc++.h>
using namespace std;

//kan1-> x1 = starting point v1 = lenght
//kan2-> x2 = starting point v2 = lenght


string kangaroo(int x1,int v1,int x2,int v2){
    int test;
    bool b;
    if(x1<x2){
        test=1;
        if(v1<v2){
            b = false;
        }
    }else if(x2<x1){
        test=2;
        if(v2<v1){
            b = false;
        }
    }else if(x1==x2){
        if(v1!=v2){
            b = false;
        }
    }else{
        int i=1;
        int d1 = x1;
        int d2 = x2;
        while(1){
            d1+=(v1);
            d2+=(v2);
            if(d1==d2){
                b = true;
            }else if(test==1 && d1<d2){
                b = false;
            }else if(test==2 && d2<d1){
                b = false;
            }else{
                i=i+1;
            }
            
        }
    }

    if(b==true){
        return "YES";
    }else{
        return "NO";
    }

}


int main(){
    
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    cout<<kangaroo(x1,v1,x2,v2);

    
    return 0;
}
