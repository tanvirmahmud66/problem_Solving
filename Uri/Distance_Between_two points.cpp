#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){


   double x1,y1,x2,y2;
   cin>>x1>>y1;
   cin>>x2>>y2;

   cout<<fixed;
   cout<<setprecision(4);
   double distance;

   distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

   cout<<distance<<endl;




    return 0;
}
