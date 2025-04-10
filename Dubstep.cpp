#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    string s;
    cin>>s;
    vector<string>ans;
    
    for(int i = 0 ;i<s.size();i+=3){
        string p;
        while(i<s.size() && s.substr(i,3)!="WUB"){
            p+=s[i];
            i++;

        }
        ans.push_back(p);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

}