#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;
    if(T>0 && T<=100){
        for(int i=0;i<T;i++){
            string S;
            cin>>S;
            int count = 0,ball = 0,over = 0;
            int size=0,itr=0;
            while(S[itr]!=NULL){
                ++size;
                itr++;
            }
            if(size>0 && size<=100){
                for(int j=0;j<size;j++){
                    if(S[j]=='N'||S[j]=='W'||S[j]=='D'||S[j]=='n'||S[j]=='w'||S[j]=='d'){
                        continue;
                    }else if(S[j]=='0'||S[j]=='1'||S[j]=='2'||S[j]=='3'||S[j]=='4'||S[j]=='5'||S[j]=='6'){
                        ++count;
                    }else if(S[j]=='O'||S[j]=='o'){
                        ++count;
                    }
                }

                if(count<6){
                    ball = count;
                    if(ball==1){
                        cout<<ball<<" BALL"<<endl;
                    }else{
                        cout<<ball<<" BALLS"<<endl;
                    }
                }else if(count%6==0){
                    over = count/6;
                    if(over>1){
                        cout<<over<<" OVERS"<<endl;
                    }else{
                        cout<<over<<" OVER"<<endl;
                    }
                }else if(count>6){
                    ball = count;
                    while(ball>=6){
                        ++over;
                        ball = ball-6;
                    }
                    if(over>1){
                        if(ball==1){
                            cout<<over<<" OVERS "<<ball<<" BALL"<<endl;
                        }else{
                            cout<<over<<" OVERS "<<ball<<" BALLS"<<endl;
                        }
                    }else{
                        if(ball==1){
                            cout<<over<<" OVER "<<ball<<" BALL"<<endl;
                        }else{
                            cout<<over<<" OVER "<<ball<<" BALLS"<<endl;
                        }
                    }
                }
            }
        }
    }
}
