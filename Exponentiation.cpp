#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

long long f(long long a,long long b){
    a = a%MOD;
    long long ans =1;

    while(b>0){
        if(b%2==1)ans = (ans*a)%MOD;
        a = (a*a)%MOD;
        b=b/2;
    }
    return ans;
}


int main(){
    long long n;
    cin>>n;

    while(n--){
        long long a,b;
        cin>>a>>b;
        cout<<f(a,b)<<endl;
    }
}