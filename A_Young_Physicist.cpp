#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;


    int suma=0,sumb=0,sumc=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;

        suma+=a;
        sumb+=b;
        sumc+=c;
    }

    if(suma == 0 && sumb == 0 && sumc == 0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}