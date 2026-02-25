#include<bits/stdc++.h>
using namespace std;

pair<int,int> getFloorAndCeil(vector<int>& arr, int x) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int floorVal = -1, ceilVal = -1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == x) {
            return {arr[mid], arr[mid]};
        }
        else if(arr[mid] < x) {
            floorVal = arr[mid];   // possible floor
            low = mid + 1;
        }
        else {
            ceilVal = arr[mid];    // possible ceil
            high = mid - 1;
        }
    }

    return {floorVal, ceilVal};
}


int main(){

    vector<int> arr = {1,3,8,10,15};
    int k = 12;
    pair<int,int>ans = getFloorAndCeil(arr,k);
    if(abs(ans.first-k) < abs(ans.second)-k)cout<<ans.first;
    else cout<<ans.second;
    return 0;
}