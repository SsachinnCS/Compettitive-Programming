#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    int n,m;
    cin>>n>>m;

    map<string,string>words;

      for(int i = 0; i < m; i++){
        string s1,s2;
        cin>>s1>>s2;
        if(s1.size()>s2.size())words[s1]=s2;
        else words[s1]=s1;
    }

 for (int i = 0; i < n; i++){
        string a;
        cin>>a;
        cout<<words[a]<<" ";
    }

    return 0;
   
}