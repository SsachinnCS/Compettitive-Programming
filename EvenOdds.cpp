#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
   long long n,k;
   cin>>n>>k;
    
    long long no = (n+1)/2;

    if(k<=no){
        cout<<(2*k-1);
    }

    else cout<<((k-no)*2);

    return 0;
}