#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& arr,int i,int j,int x){
    while(i<=j){
        int mid = i+(j-i)/2;

        if(arr[mid]==x)return 0;
        else if(arr[mid]<x)i=mid+1;
        else j=mid-1;
    }

    int ans = abs(arr[j]-x) < abs(x-arr[i]) ? arr[j] : arr[i];
    return ans;
}

int main(){

    vector<int>arr = {4,6,10,34,90,97};
    int x =92;
    int n = arr.size()-1;
    cout << solve(arr, 0, n , x);

    return 0;
}