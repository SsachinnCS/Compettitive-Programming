#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int nt = (k*l)/nl;
    int tl = (c*d);
    int ts = (p/np);
    int elemm = min(nt,min(tl,ts));

    cout<<elemm/n;
    


    //cout<<n/(min(((k*l)/nl),min((c*d),(p*np))));

    return 0;
   
}
//