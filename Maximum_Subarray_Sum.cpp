#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans = INT_MIN,temp = 0;
    for(int i=0;i<n;i++){
        temp = max(arr[i],temp+(arr[i]));
        ans=max(ans,temp);
    }

    cout<<ans;
    return 0;
}