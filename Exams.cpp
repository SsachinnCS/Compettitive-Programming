#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n,k;
    cin>>n>>k;

    if(n*3 < k )cout<<0;
    else if(n*3 >= k )cout<<n*3 - k;
    // if(k%2 != 0 && n==1){
    //     cout<<0;
    //     return 0;
    // }

    // else if(k%2==0 && k/2==n){
    //     cout<<n;
    //     return 0;
    // }


    // int count = 0;
    // while(n--){
    //     count++;
    //     k-=2;
    //     if(k%3==0){
    //         cout<<count;
    //         return 0;
    //     }
    // }


    
    return 0;
   
}