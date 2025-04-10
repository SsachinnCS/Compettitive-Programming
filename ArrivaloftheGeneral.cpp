#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    int maxPos =0;
    int minPos = 0;
    int count = 0;

    

    for(int i = 0; i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
        if(arr[i]>arr[maxPos])maxPos=i;
        if(arr[i]<=arr[minPos])minPos=i;
        
    }

    int ans=0;
    if(maxPos>minPos)ans=maxPos+(n-1-minPos)-1;
    else ans=maxPos+(n-1-minPos);

    cout<<ans;
}