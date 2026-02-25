#include<bits/stdc++.h>
using namespace std;

int solve(int i,int n,vector<int>& arr,int sum,int tempsum){
   if(i==n) return (tempsum == sum)?1: 0;

  
        
        int take = solve(i+1,n,arr,sum,tempsum+arr[i]);
        int notake = solve(i+1,n,arr,sum,tempsum);
    

    return take + notake;


}


int main(){

    vector<int>arr = {4, 2, 10, 5, 1, 3};
    int sum = 5;
    cout<<solve(0,arr.size(),arr,sum,0);
    
}