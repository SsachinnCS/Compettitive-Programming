#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
   int n;
   cin>>n;

    int arr[n];
   for(int i = 0 ; i<n;i++){
    cin>>arr[i];
   }

   int mnsum = INT_MAX;

   for(int i = 0  ; i<n;i++){
    int sum = 0;
    for(int j = 0 ;j<arr[i];j++){
        int a ;
        cin>>a;
        sum += a*5; 
    }
    int c =sum+(arr[i]*15);
    mnsum = min(mnsum,c);
   }

   cout<<mnsum;
}