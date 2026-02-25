#include<bits/stdc++.h>
using namespace std;

int solve(int i,int sum, int target,vector<int>& arr){
    
    if(i == arr.size())return 0==target ? 1:0;

    int ntake = solve(i+1,sum,target,arr);

  
    int take =    solve(i+1,sum,target-arr[i],arr);

    return take+ntake;
       
}

int main(){

    vector<int>arr = {1, 2, 3};
    int target = 3;
    cout<<solve(0,0,target,arr)<<endl;
}