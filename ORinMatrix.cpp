#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m,n, arr[100][100];
    bool check = false;

    

    cin >> m >> n;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
           cin >> arr[i][j];
           if(arr[i][j] >= 2  ||  arr[i][j] < 0 ){
            check=true;
            break;
        }
        }
        
    }

    if(check)cout<<"NO";
    else cout<<"YES";

    return 0;
}