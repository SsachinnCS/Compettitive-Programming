#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main(){
    optimize();

    int m, n,a;
    cin >> n >> m;

    vector<int> colors(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int used[4] = {0};
        used[colors[a]] = 1;
        used[colors[b]] = 1;
        used[colors[c]] = 1;

        for (int col = 1; col <= 3; col++) {
            if (!colors[a] && !used[col]) {
                colors[a] = col;
                used[col] = 1;
                break;
            }
        }

        for (int col = 1; col <= 3; col++) {
            if (!colors[b] && !used[col]) {
                colors[b] = col;
                used[col] = 1;
                break;
            }
        }

        for (int col = 1; col <= 3; col++) {
            if (!colors[c] && !used[col]) {
                colors[c] = col;
                used[col] = 1;
                break;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << colors[i] << " ";
    }
    cout << endl;

    return 0;
}



// int main(){
//     optimize();

//     int n,m,a,b,c;
//     cin>>n>>m;
//     int arr[m][3];
//     vector<int>ans(m*3+1,-1);
//    for(int i=1;i<=m*3;i++){
//     cin>>ans[i];
//    }

//    //for(auto it:ans)cout<<it<<" ";

//    vector<int>col(n+1,0),sol(n+1,0);
//    col[ans[1]]=1;
//    col[ans[2]]=2;
//    col[ans[3]]=3;

   
//    for(int i=1;i<=ans.size();i++){
//     if(col[ans[i]]==0)col[ans[i]]=abs(6-(col[ans[i-1]] + col[ans[i-2]]));
//    }
//    for(int i=1;i<=n;i++)cout<<col[i]<<" ";
//     return 0;
// }