#include<iostream>
using namespace std;

int main(){

    int r,c;
    cin>>r>>c;
    char f[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>f[i][j];
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(f[i][j]!='*'){
                if(i==0 && j==0){
                    if(f[i][j+1]!='*' && f[i+1][j]!='*'){
                        ++count;
                    }
                }else if(i==0 && j!=0 && j<c-1){
                    if(f[i][j-1]!='*' && f[i][j+1]!='*' && f[i+1][j]!='*'){
                        ++count;
                    }
                }else if(i==0 && j==c-1){
                    if(f[i][j-1]!='*' && f[i+1][j]!='*'){
                        ++count;
                    }
                }else if(i!=0 && i<r-1 && j==0){
                    if(f[i+1][j]!='*' && f[i][j+1]!='*' && f[i-1][j]!='*'){
                        ++count;
                    }
                }else if(i!=0 && i<r-1 && j!=0 && j<c-1){
                    if(f[i-1][j]!='*' && f[i][j+1]!='*' && f[i+1][j]!='*' && f[i][j-1]!='*'){
                        ++count;
                    }
                }else if(i!=0 && i<c-1 && j==c-1){
                    if(f[i-1][j]!='*' && f[i+1][j]!='*' && f[i][j-1]!='*'){
                        ++count;
                    }
                }else if(i==r-1 && j==0){
                    if(f[i-1][j]!='*' && f[i][j+1]!='*'){
                        ++count;
                    }
                }else if(i==r-1 && j!=0 && j<c-1){
                    if(f[i-1][j]!='*' && f[i][j-1]!='*' && f[i][j+1]!='*'){
                        ++count;
                    }
                }else if(i==r-1 && j==c-1){
                    if(f[i-1][j]!='*' && f[i][j-1]!='*'){
                        ++count;
                    }
                }
            }
        }
    }

    cout<<count;

}
