#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x;
    cin>>n>>x;

    unordered_map<int,int>mp;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    for(int i=0;i<n;i++){
        int dif = x-arr[i];
        if(mp.count(dif)){
            cout<<mp[dif]+1<<" "<<i+1;
            return 0;
        }
        mp[arr[i]]=i;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}