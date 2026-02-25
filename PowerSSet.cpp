#include<bits/stdc++.h>
using namespace std;


void solve(int idx,int n, vector<int>& arr, vector<int>& temp, vector<vector<int>>& ans){

    // if(i==n){
    //     ans.push_back(temp);
    //     return;
    // }

    // solve(i+1,n,arr,temp,ans);

    // temp.push_back(arr[i]);
    // solve(i+1,n,arr,temp,ans);
    // temp.pop_back();

    ans.push_back(temp);

    for(int i=idx;i<n;i++){
        temp.push_back(arr[i]);
        solve(i+1,n,arr,temp,ans);
        temp.pop_back();
    }


}

int main(){

    vector<int>arr = {1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    int n = arr.size();
    solve(0,n,arr,temp,ans);
    for(auto a:ans){
        cout<<'[';
        for(auto b:a){
            cout<<b;
        }
        cout<<']'<<endl;
    }
}