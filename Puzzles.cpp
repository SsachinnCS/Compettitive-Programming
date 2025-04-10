#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int noS,puz;
    cin>>noS>>puz;

    int arr[puz];

    for (int  i = 0; i < puz; i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }

    sort(arr,arr+puz);
    
    int ans = INT_MAX;
    for (int  i = 0; i <= puz-noS; i++)
    {
        ans = min(ans,arr[i+noS-1]-arr[i]);
    }
    

    cout<<ans;
    

    
    
    return 0;


}