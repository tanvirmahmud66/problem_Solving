#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;
    cin>>h>>m;
    if(h==12){
        h=0;
    }
    if(m==60){
        m=0;
        ++h;
        if(h>12){
            h-=12;
        }
    }

    double a_h = 0.5*(h*60+m),a_m = 6*m;
    double ang = abs(a_h-a_m);

    ang = min(ang,360-ang);

    cout<<fixed<<setprecision(7)<<ang<<endl;


    return 0;
}
