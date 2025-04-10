#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double k,d;
    cin >> k>>d;

    double omg =pow(10,k-1);

    if(d==0 && k>1){
        cout<<"No solution";
        return 0;
    }
    // else {
    //     cout<<"No solution";
    //     return 0;
    // }
    cout<<d;
    for(int i=1;i<k;i++){
        cout<<0;
    }

    
    return 0;
}
