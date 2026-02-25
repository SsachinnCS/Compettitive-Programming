#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,target,a;
    cin>>n>>target;
    
    unordered_map<long long,int>mp;
     long long  sum = 0,ans=0;
     mp[0]=1;
    for(long long i=0;i<n;i++){
        cin>>a;
        sum+=a;
        long long dif =sum-target;
        if(mp.count(dif))ans+=mp[dif];
        mp[sum]++;

    }
    cout<<ans;
    return 0;
}