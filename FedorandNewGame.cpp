#include<bits/stdc++.h>
using namespace std;

int main(){
     ios::sync_with_stdio(false); 
    cin.tie(0);

    int n,m,k,dost(0);
    cin>>n>>m>>k;

    int arr[m+1];
    for(int i=0;i<m+1;i++){
        cin>>arr[i];
    }

    for(int i=0;i<m;i++){
        int t=0;
        for(int j=0;j<n;j++){
            if(((arr[i]>>j) & 1 )!= ((arr[m]>>j) &1))t++;
        }
        if(t<=k)dost++;
    }

    cout<<dost;
}