#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N = 1e5 + 10;
const int INF = 1e9 + 10;


int main(){


    ll n;
    cin>>n;

    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    ll cnt = 0;
    ll i=1;
    while(i!=n){
        if(arr[i]>=arr[i-1])i++;
        else{
            cnt += arr[i-1]-arr[i];
            arr[i]=arr[i-1];
            i++;
        }
        
    }
    cout<<cnt<<endl;
}