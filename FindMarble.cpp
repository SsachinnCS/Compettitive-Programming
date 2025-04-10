#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,s,t;
    cin>>n>>s>>t;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(s==t)cout<<0;
    else if(arr[0]==s && arr[n-1]==t)cout<<n-1;
    else cout<<-1;
    return 0; 
}