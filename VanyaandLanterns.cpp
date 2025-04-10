#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    int n,l,ans(INT_MIN);
    cin>>n>>l;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=0;i<n-1;i++){
        ans = max(ans,arr[i+1]- arr[i]);
    }
    cout<<(double)ans/2;
}