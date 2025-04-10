#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
   int n;
   cin>>n;

   if(n%2!=0)cout<<"-1";
   else {
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
    for(int i= 1;i<n;i+=2){
        swap(arr[i],arr[i+1]);
    }

    for(int i= 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
   }
}