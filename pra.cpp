#include<bits/stdc++.h>

using namespace std;


int main(){

    vector<int>arr = {1,2,3};

   vector< vector<int>>ans;

    for(int i=0;i<arr.size();i++){
        vector<int>temp;
        for(int j=i;j<arr.size();j++){
            temp.push_back(arr[j]);
            ans.push_back(temp);
        }

    }
    sort(ans.begin(),ans.end());
    for(auto a:ans){
        for(auto b:a)cout<<b<<" ,";
        cout<<endl;
    }
}