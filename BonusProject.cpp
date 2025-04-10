#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n,k;
    cin>>n>>k;
    
    int bonus[n];
    int cost[k];
    int c = k-5;

    for(int i = 0 ; i<n ;i++){
        int a,b;
        cin>>a>>b;
        bonus[i]=a;
        cost[i]=b;
    }

    bool  check = false;
    if( bonus[n-1]-cost[n-1]*2 >=0)check = true;
    if( bonus[n-2]-cost[n-2]*3 >=0)check = true;
    if( bonus[0]-cost[0]*c >=0)check = true;
     
    if(check){
        cout<<c<<" 3 2"<<"\n";
    }

    else {
        cout<<"0 0 0"<<"\n";
    }




}