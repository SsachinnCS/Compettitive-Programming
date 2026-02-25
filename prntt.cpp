#include<bits/stdc++.h>
using namespace std;

void solve(int n,string &temp,vector<string>& ans){
    if(temp.size()==n){
        ans.push_back(temp);
        return ;
    }

    temp.push_back('0');
    solve(n,temp,ans);
    temp.pop_back();

    if(temp.empty() || temp.back()!='1'){
        temp.push_back('1');
        solve(n,temp,ans);
        temp.pop_back();
    }
}

int main(){
    int n = 5;
    vector<string>ans;
    string temp = "";
    solve(n,temp,ans);
    for(auto a:ans)cout<<a<<endl;
    cout<<"size"<<ans.size()<<"size";
}