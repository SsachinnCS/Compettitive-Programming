#include<bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long
const int MOD = 1e9 + 7;

bool check(string s,int n){
    string fsh = s.substr(0,n/2);
    string snh = s.substr(n/2);
    reverse(snh.begin(),snh.end());
    if(fsh==snh){
        return 1;
    }
    return 0;
}
int main(){
    int n,p;
    string s;

    cin>>n>>p>>s;
    int count = 0;

    int ans = check(s,n);
    if(ans){
        cout<<count<<endl;
        return 0;
    }
   
   
    int a=p;
    while(p<n/2){
        if(s[a+1]==s[n-a]){
            count++;
            a++;
        }
        else {
            int cnt = abs(int(s[a+1]) - int(s[n-a]));
            s[s[n-a]]=char(97+cnt);
            count +=cnt;
        }
    }
     ans = check(s,n);
    if(ans){
        cout<<count<<endl;
        return 0;
    }
    return 0;
}