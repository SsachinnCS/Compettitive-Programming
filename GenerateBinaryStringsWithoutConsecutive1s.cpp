#include<bits/stdc++.h>
using namespace std;


void solve(int n,vector<vector<char>>& ans,vector<char>& temp){

    if(n == temp.size()){
        ans.push_back(temp);
        return;
    }

    temp.push_back('0');
    solve(n,ans,temp);
    temp.pop_back();

    if(temp.empty() || temp.back()!='1'){
        temp.push_back('1');
        solve(n,ans,temp);
        temp.pop_back();
    }
}

int main(){

    int n = 3;
    vector<vector<char>>ans;
    vector<char>temp;

    solve(n,ans,temp);
    for(auto a:ans){
        cout<<'[';
        for(auto b:a)cout<<b<<"";
        cout<<']'<<endl;
    }
}