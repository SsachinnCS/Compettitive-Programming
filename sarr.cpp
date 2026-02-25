#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {3,1,2,4};
    vector<vector<int>>ans;
    int rsum = 0;
    for(int i=0;i<arr.size();i++){
        vector<int>temp;
        int sum = 0;
        for(int j=i;j<arr.size();j++){
            temp.push_back(arr[j]);
            sum+=arr[j];
            ans.push_back(temp);
            rsum+=sum;
        }
    }

    for(auto a:ans){
        cout<<"{";
        for(auto b:a)cout<<b<<" ";
        cout<<"}"<<endl;
    }
    cout<<"sum="<<rsum;
}