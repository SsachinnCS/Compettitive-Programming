#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int y,k,n;
    cin>>y>>k>>n;

    int x = k-(y%k);
    int maX=n-y;

    if(x<=maX){
        cout<<x;
        x+=k;
        while(x<=maX){
            cout<<" "<<x;
            x+=k;
        }
        
    }
    else {
        cout<<"-1";
        return 0;
    }
    return 0;
}
