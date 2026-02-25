#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    if(s.empty())return 0;
    int ans = 1,cnt=1;

    int j=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])cnt++;

        else cnt=1;
        ans = max(ans,cnt);
    }
    

    cout<<ans;
    return 0;
   

  

}