#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n,m,cnt(0),a;
    cin>>n>>m;

    vector<int>ans(m);

    for(int i=0;i<n;i++){
        cin>>a;
       while(a>0){ 
        int c = a%10;
        ans.push_back(c);
        if(c>=m){
            cnt++;
            ans.clear();
            break;
        }
        a/=10;
        if(ans.size()==m)cnt++;
    } 
    
    
    }
    cout<<cnt;
    return 0;
}