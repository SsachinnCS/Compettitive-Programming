#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin>>n;
    int h[n];
    int g[n];
    int count = 0;

    for(int i = 0 ; i<n ;i++){
        int a,b;
        cin>>a>>b;
        h[i]=a;
        g[i]=b;
    }

    for(int i = 0 ; i<n ;i++){
        for(int j = 0 ; j<n ; j++){
            if(h[i]==g[j])count++;
        }
    }

    cout<<count;
}