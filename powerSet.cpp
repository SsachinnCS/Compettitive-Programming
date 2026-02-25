#include<bits/stdc++.h>
using namespace std;

void solve(int i,int n,vector<int>& temp,vector<vector<int>>&ans,vector<int>& num){
    if(i == n){
        ans.push_back(temp);
        return;
    }

    solve(i+1,n,temp,ans,num);

    temp.push_back(num[i]);
    solve(i+1,n,temp,ans,num);
    temp.pop_back();
}

int main(){

    
    vector<vector<int>>ans;
    vector<int>temp;
    vector<int>num = {1,2,3,4,5};
    int n= num.size();
    solve(0,n,temp,ans,num);
    for(auto a:ans){
        cout<<'[';
        for(auto b:a)cout<<b<<" ";
        cout<<']';
        cout<<endl;
    }
}