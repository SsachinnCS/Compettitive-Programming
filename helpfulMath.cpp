#include <bits/stdc++.h>
using namespace std;

int main(){


    string s;
    cin>>s;
    string a= "";
    for(char i : s){
        if(i == '+')continue;
        else a+=i;
    }
    sort(a.begin(),a.end());
    string b = "";

    int idx = 0;
    for(char i : s){
        if(i == '+')b+="+";
        else {
            b+=a[idx];
            idx++;
        }
    }
    cout<<b ;  //<<a[s.size()];
    return 0;
}