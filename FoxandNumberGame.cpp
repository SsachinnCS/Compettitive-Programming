#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int g = arr[0];
    for(int i=1;i<n;i++){
        g=__gcd(g,arr[i]);
    }
    cout<<n*g;
    return 0;
}