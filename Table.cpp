#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n,m;
    cin>>n>>m;
    bool check = false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            if(a==1){
            if(i==0 || i==n-1 || j==0 || j==m-1){
                check=true;
                
            }
            }

        }
    }
    if(check)cout<<"2";
    else cout<<"4";
    return 0;
   
}