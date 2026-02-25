#include<bits/stdc++.h>

using namespace std;

long long f(long long n,long long k){
   if(n==1)return 1;
   

   if(k<=(n+1)/2){
    if(2*k<=n)return 2*k;
    else return 1;
   }
  
    long long res=f(n/2 , k-(n+1)/2);
    if(n%2==0)return 2*res-1;
    else return 2*res+1;
   
}



int main(){
    
    int q;
    cin>>q;

    while(q--){
        long long n,k;
    cin>>n>>k;

    cout<<f(n,k)<<endl;
    }
    return 0;
}