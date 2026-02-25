#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n;
    cin>>n;

    vector<long long>arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    long long ans = INT_MIN;
    long long sum =0;
    for(int i=0;i<n;i++){
        sum = max(arr[i],sum+arr[i]);
        ans=max(ans,sum);
        
    }
    cout<<ans;
}