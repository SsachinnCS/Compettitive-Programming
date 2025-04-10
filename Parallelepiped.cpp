#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int x,y,z,a,b,c;
    cin>>x>>y>>z;

    a = sqrt((x*z) /y);
    b = sqrt((x*y) /z);
    c = sqrt((y*z) /x);

    cout<<4*(a+b+c);

    
  
   
}