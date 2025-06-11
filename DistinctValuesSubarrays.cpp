#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

int main(){
    optimize();

    int n;
    cin >> n;

    vector<int>arr(n);
    for(auto &a:arr)cin>>a;

    unordered_set<int>distinct;
    ll cnt = 0;

    int left=0;
    for(int r=0;r<n;++r){
        while(distinct.find(arr[r])!=distinct.end()){
            distinct.erase(arr[left]);
            left++;
        }
        distinct.insert(arr[r]);
        cnt+=r-left +1;
    }
    cout<<cnt<<endl;

    return 0;
}