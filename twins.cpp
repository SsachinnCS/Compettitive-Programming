#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){

    int n,sum = 0,ans=0,mybag=0 ;
    cin>>n;

    int arr[n];
    for(int i = 0 ;i<n ;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    sort(arr,arr+n);
    while(sum>=mybag){
        mybag+=arr[n-1];
        sum-=arr[n-1];
        ans++;
        n--;
    }
    cout<<ans<<"\n";
    return 0;
}