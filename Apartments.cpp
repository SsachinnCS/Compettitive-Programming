#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;


int main(){
    optimize();

    ll n,m,k;
    cin>>n>>m>>k;

    ll arr[n],brr[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    sort(brr,brr+m);

    // for(auto a:arr)cout<<a<<" ";
    // cout<<endl;
    // for(auto b:brr)cout<<b<<" ";

    ll cnt = 0;
    ll i=n-1,j=m-1;
    while(i>=0 && j>=0){
        if(abs(arr[i]-brr[j]) <= k){cnt++;
        i--;j--;}
        else if(brr[j] > arr[i]+k){
            j--;
        }
        else i--;
    }
    cout<<cnt<<endl;
    return 0;

}