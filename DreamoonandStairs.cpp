#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n,m,i=1,b=0;
    cin>>n>>m;
    n= n+1;


    if((n-1) <m)cout<<"-1\n";
    else if(n/2 <= m){
        cout<<m;
    }
    if(n/2 > m){
        while(b < n/2){
            b =m*i;
            i++;
        }
        cout<<b;
    }
    

    return 0;
}