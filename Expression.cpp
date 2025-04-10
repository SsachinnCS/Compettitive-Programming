#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n=3,a,b,c;
    
    int fst ;
    int snd ;
    int thd ;
    int frt ;
    
    cin>>a>>b>>c;

    fst = a+b+c;
    snd = a*(b+c);
    thd = a*b*c;
    frt = (a+b)*c;

    int ans = max(max(fst, snd), max(thd, frt));

    cout<<ans;

    
    
    return 0;


}