#include<bits/stdc++.h>

using namespace std;

void solve(int n,vector<string>& result,string& temp){

    if(temp.size() == n){
        result.push_back(temp);
        return;
    }

    temp.push_back('0');
    solve(n,result,temp);
    temp.pop_back();

    if(temp.empty() || temp.back()!='1'){
        temp.push_back('1');
        solve(n,result,temp);
        temp.pop_back();
    }

    
}

int main(){

    int n= 4;

    vector<string>result;
    string temp = "";
    solve(n,result,temp);
    for(auto ch:result)cout<<ch<<endl;
}