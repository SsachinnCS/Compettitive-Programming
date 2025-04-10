#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[100005];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int co=2,ans=2;

    if(n==1)ans=1;

    for(int i=2;i<n;i++){
        if(arr[i]==arr[i-1]+arr[i-2])co++;
        else co=2;
        ans = max(ans,co);
    }
    cout<<ans<<endl;
    return 0;
}