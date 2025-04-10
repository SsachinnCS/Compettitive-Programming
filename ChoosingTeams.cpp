#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n,k;
    cin>>n>>k;

   int count = 0  ;
    for(int i = 0 ; i<n ;i++){
        int a;
        cin>>a;
        if((a+k)<=5)count++;
        
    }

   cout<<count/3;
    
    
    
    return 0;


}