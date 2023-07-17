#include<bits/stdc++.h>
using namespace std;

int main(){

    int r,c;
    cin>>r>>c;
    char a[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    int count=0;
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            if(a[i][j]=='#' && a[i][j-1]=='.'&& a[i-1][j]=='.'){
                ++count;
            }else if(a[i][j]=='#' && a[i][j+1]=='.' && a[i-1][j]=='.'){
                ++count;
            }else if(a[i][j]=='#' && a[i][j-1]=='.' && a[i+1][j]=='.'){
                ++count;
            }else if(a[i][j]=='#' && a[i][j+1]=='.' & a[i+1][j]=='.'){
                ++count;
            }
        }
    }

    cout<<count;
}
