#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {3,1,2,4};

    int ans =0;

    for(int i=0;i<arr.size();i++){
        int temp = INT_MAX;
        for(int j=i;j<arr.size();j++){
            temp = min(temp,arr[j]);
            ans+=(temp);
        }
    }
    cout<<ans<<endl;
}