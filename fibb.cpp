#include<bits/stdc++.h>
using namespace std;


// int fib(int n){
//     if(n==0 || n==1)return 1;
//     return fib(n-1) + fib(n-2);
// }
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
//    int n;
//    cout<<"Enter n : ";
//    cin>>n;
//    cout<<0<<" ";
//    for(int i = 0 ;i<n-1;i++){
//     cout<<fib(i)<<" ";
//    }

//     return 0;
int n;
cin>>n;

int arr[n];
arr[0] = 0;
arr[1]= 1;
cout<<arr[0]<<" "<<arr[1]<<" ";
for(int i = 2;i<n;i++){
    arr[i] = arr[i-1]+arr[i-2];
    cout<<arr[i]<<" ";
}
}