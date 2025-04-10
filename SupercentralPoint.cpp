#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
   int n,t(0);
   cin>>n;

   int x[n],y[n];
   for(int i= 0;i<n;i++){
    cin>>x[i]>>y[i];
   }

   for(int i=0;i<n;i++){
    bool r(false),l(false),u(false),lo(false);
    for(int j =0;j<n;j++){
        if(x[j]>x[i] and y[j]==y[i])r=true;
        if(x[j]<x[i] and y[j]==y[i])l=true;
        if(x[j]==x[i] and y[j]<y[i])lo=true;
        if(x[j]==x[i] and y[j]>y[i])u=true;
    }
    if(r and l and lo and u)t++;
   }

   cout<<t;
   return 0;

  
}