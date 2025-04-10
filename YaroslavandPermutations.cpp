#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    map<int,int>ans;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
        ans[arr[i]]++;
    }

    for(int i=0;i<n;++i){
        if(ans[arr[i]]>(n+1)/2){
        cout<<"NO";
        return 0;
        }
    }

    cout<<"YES";
    return 0;
}
