#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int n,k;
    cin>>n>>k;
    int ans = INT_MIN;

    for(int i =0 ; i<n;i++){
        int f,t;
        cin>>f>>t;
        if(t<k)ans=max(ans,f);
        else ans=max(ans,f-(t-k));
    }

    cout<<ans;
}