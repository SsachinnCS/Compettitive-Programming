#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
   int n,x;
   cin>>n>>x;
   int count = 0;

   for(int i =0 ;i<n;i++){
    int a,b;
    cin>>a>>b;
    if(a==1){
        cout<<b;
        return 0;
    }
    else count += (b-a)+1;
   }

   cout<<count+1;
    return 0;
   
}