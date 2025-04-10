#include<bits/stdc++.h>
using namespace std;

int main(){
 ios::sync_with_stdio(false); cin.tie(0);

 int n,c ;
 cin>>n>>c;
 int arr[n],ans=0;
 

 for(int i = 0 ; i< n;i++){
    cin>>arr[i];
 }

 for(int i = 0 ; i< n-1;i++){
    ans=max(ans,arr[i]-arr[i+1]-c);
 }
 cout<<ans;
 return 0;

}