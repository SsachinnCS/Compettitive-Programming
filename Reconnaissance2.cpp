#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin>>n;

    
    
   int arr[n];
   int a=0,b=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int ok = abs(arr[0]-arr[n-1]);
    int val = INT_MAX;
    for(int i=0;i<n-1;i++){
      int c = abs(arr[i]-arr[i+1]);

      if(c<val){
        val = c;
        a=i;
        b=i+1;
      }
      
    }
   

    if(val<ok)cout<<a+1<<" "<<b+1;
    else cout<<"1 "<<n;
    
    return 0;
   
}