#include<bits/stdc++.h>
#define FOR(a, b, c) for(auto i = a; i < b; i += c)

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    bool check = false;
    int n,p,q,lo;
    cin>>n;
    set<int>ans;

    cin>>p;
    FOR(0,p,1){
        cin>>lo;
        ans.insert(lo);
    }
    
    cin>>q;
    FOR(0,q,1){
        cin>>lo;
        ans.insert(lo);
    }
    
    
    if(ans.size()==n)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";


    return 0;
}