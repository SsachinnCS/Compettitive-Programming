#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a;
    cin>>n;
    int ans = n;
    for(int i=1;i<n;i++){
        cin>>a;
        ans^=i^a;
    }
    cout<<ans;
    return 0;
}