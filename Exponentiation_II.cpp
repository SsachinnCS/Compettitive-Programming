#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

long long f(long long a,long long b,long long m){
    long long res =1;
   while(b>0){ 
    if(b%2==1)res = (res*a)%m;
    a =(a*a)%m;
    b=b/2;
}
return res;

}


int main(){

    long long n;
    cin>>n;

    while(n--){
        long long a,b,c;
        cin>>a>>b>>c;

        long long exp = f(b,c,MOD-1);
        long long ans = f(a,exp,MOD);

        cout<<ans<<endl;
    }
}