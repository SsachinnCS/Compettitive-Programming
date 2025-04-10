#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k;
    cin >> k;

    int ans[10]={0};
    char grid [4][4];

    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++ ){
            cin>>grid[i][j];
            if(grid[i][j]!='.'){
                ans[grid[i][j]-'0']++;
            }
        }
    }

    for(int i =1;i<=9;i++){
        if(ans[i]> 2*k){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    
    return 0;
}
