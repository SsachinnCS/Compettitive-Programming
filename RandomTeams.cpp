#include<bits/stdc++.h>
using namespace std;

long long int pairs(long long int a){
    return a*(a-1)/2;
}

int main(){
     ios::sync_with_stdio(false); 
    cin.tie(0);

    long long int n,m;
    cin>>n>>m;

    long long int a(n/m),b(n%m);
    long long int minn = pairs(a)*(m-b)+pairs(a+1)*b;
    long long int maxx= pairs(n-m+1);
   
    cout<<minn<<" "<<maxx;
   
   return 0;
}