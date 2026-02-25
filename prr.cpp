#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
map<char,int>mp;
for(auto a:s){
    mp[a]++;
}


string mid = "";
int odd = 0;
string ans = "";
for(auto a:mp){
    if(a.second%2==0){
        for(int i=0;i<(a.second/2);i++)ans+=a.first;
    }
    else {
        odd++;
        for(int j=0;j<a.second;j++)mid+=a.first;
    }
}
if(odd>1){cout<<"NO SOLUTION";return 0;}
cout<<ans;
cout<<mid;
    reverse(ans.begin(),ans.end());
    cout<<ans;

}