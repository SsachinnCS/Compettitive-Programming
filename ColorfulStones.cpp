#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
     
    string s,t;
    cin>>s>>t;

    int cnt=1;

        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
            cnt++;
            i++;
        }
        j++;
        }
        cout<<cnt;
       
    return 0;
}