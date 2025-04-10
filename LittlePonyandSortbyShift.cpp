#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,s(0),v(0);
    cin>>n;
    vector<int>arr(n);

 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   for(int i=0;i<n-1;i++)if(arr[i]>arr[i+1])s=i,v++;
   if(arr[n-1]>arr[0])s=n-1,v++;
   if(v==0)cout<<0<< endl;
   else if(v>1)cout<<-1<< endl;
   else cout<<n-1-s<< endl;
   return 0;
}