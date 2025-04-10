#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n,m;
    cin>>n>>m;
    
    int nn=0,pn=0;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        if(m>0)pn++;
        else nn++;
    }

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if((b-a+1)%2==1)cout<<"0"<<"\n";
        else if((b-a+1)/2 <= min(pn,nn))cout<<"1"<<"\n";
        else cout<<"0"<<"\n";
    }
    return 0;
   
}