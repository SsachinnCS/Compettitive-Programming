#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main(){
    optimize();

    int m,n;
    cin>>m>>n;

    vector<vector<int>> t(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> t[i][j];

    vector<int>avl_time(n,0);
    vector<int>comp_ti(m,0);

    for(int i=0;i<m;i++){
        int startime = 0;
        for(int j=0;j<n;j++){
            startime=max(startime,avl_time[j]);
            startime+=t[i][j];
            avl_time[j]=startime;
        }

        comp_ti[i]=startime;
    }

    for(auto it:comp_ti)cout<<it<<" ";

}