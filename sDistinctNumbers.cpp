#include<bits/stdc++.h>
using namespace std;



int main(){

    int n,a;
    cin>>n;
    vector<int>arr;
    //unordered_set<int>st;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int cnt = (n>0?1:0);

    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i])cnt++;
    }

    cout<<cnt;

}