#include<bits/stdc++.h>

using namespace std;

int solve(int i,vector<int>& arr,int k,int sum){
    if(sum==k)return 1;
    if (i == arr.size()  || sum > k) return 0;

    int notake = solve(i+1,arr,k,sum);
    int take = solve(i+1,arr,k,sum+arr[i]);

    return take + notake;
}

int main(){

    vector<int>arr = {4, 9, 2, 5, 1};
    int k = 10;

    int ans = solve(0,arr,k,0);
    cout<<"ans->"<<ans;
}