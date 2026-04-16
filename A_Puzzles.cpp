#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int>arr(m+1);
    for(int i=0;i<m;i++)cin>>arr[i];

    sort(arr.begin(),arr.end());
    
    // for(auto a:arr)cout<<a<<" ";
    // cout<<endl;
    int ans = INT_MAX;
    int i=1;
    while(i<=(m-n+1)){
        //cout<<ans<<endl;
        ans = min(ans,abs(arr[i]-arr[i+n-1]));
        i++;
    }

    //cout<<a<<" "<<b<<endl;
    cout<<ans;
}