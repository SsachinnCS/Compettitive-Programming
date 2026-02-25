#include<bits/stdc++.h>
using namespace std;

void printS(int i,int s,int arr[],int sum,vector<int>&temp,int n){
    if(i==n  ){
        if(sum==s){
            for(auto a:temp)cout<<a<<" ";
        cout<<endl;
    }
    return;
    }
    

    temp.push_back(arr[i]);
    s+=arr[i];

    printS(i+1,s,arr,sum,temp,n);
    s-=arr[i];
    temp.pop_back();
    printS(i+1,s,arr,sum,temp,n);
    
}

int main(){
    vector<int>temp;
    int arr[]={1,3,2};
    int n = 3;
    int sum = 2;
    printS(0,0,arr,sum,temp,n);

    return 0;
}