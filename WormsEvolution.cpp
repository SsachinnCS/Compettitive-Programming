#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
   
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

//    for(int i=0;i<n-2;i++){
//     if(arr[i]+arr[i+1] ==  arr[i+2]){
//         cout<<arr[i+2]<<" "<<arr[i+1]<<" "<<arr[i];
//         return 0;
//     }
//    }



   for(int i=n-1;i>=0;i--){
   for(int j=0;j<n;j++){
    for(int k=j+1;k<n;k++){
        if(arr[i] == arr[j]+arr[k]){
            cout<<i+1<<" "<<k+1<<" "<<j+1;
            return 0;
        }
    }
   }
   }



   cout<<-1<<endl;
   return 0;
}