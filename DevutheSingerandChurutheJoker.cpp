#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n,d,sum=0;
    cin>>n>>d;

    for(int i = 0 ;i<n ;i++){
        int a;
        cin>>a;
        sum+=a;
    }
    //cout<<(d-sum)%5;sum+(n-1)*10

    if(sum+(n-1)*10 <= d)cout<<(d-sum)/5;
    else cout<<"-1";
    
    return 0;
}