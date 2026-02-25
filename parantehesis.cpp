#include<bits/stdc++.h>
using namespace std;

void generate(string & s,int open,int close,vector<string>& ans){
    if(open==0 && close==0){
        ans.push_back(s);
        return ;
    }
    if(open>0){
        s.push_back('(');
        generate(s,open-1,close,ans);
        s.pop_back();
    }

    if(close>0 && open<close){
        s.push_back(')');
        generate(s,open,close-1,ans);
        s.pop_back();
    }
}


int main(){
    vector<string>ans;
    string s;
    int n;
    cin>>n;
    generate(s,n,n,ans);
    for(auto a:ans)cout<<a<<" ";
}