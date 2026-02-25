#include<bits/stdc++.h>
using namespace std;

const int N = 1000001;
int cnt[N];

void solve(){
    for(int i=N-1;i>=1;i--){
        int ans = 0;
        for(int j=i;j<N;j+=i){
            ans+=cnt[j];
            if(ans>=2){
                cout<<i<<endl;
                return;
            }
        }
    }
}

int main(){

    int n;
    cin>>n;

    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        cnt[x]++;
    }
    solve();
    return 0;
}