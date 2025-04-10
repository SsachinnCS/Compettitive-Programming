#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
   long long l,r,a=0;
   cin>>l>>r;
   
   if(r-l+1<3){
    cout<<-1;
    return 0;
    
   }

   if(l%2==0){
    cout<<l<<" "<<l+1<<" "<<l+2;
    return 0;
   }

   if(r-l+1>3){
    cout<<l+1<<" "<<l+2<<" "<<l+3;
    return 0;
    
   }
   cout<<-1<<endl;
}