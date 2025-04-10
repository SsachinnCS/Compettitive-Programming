#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    string a,b;
    getline(cin,a);
    getline(cin,b);

    if(a.size()!=b.size()){
        cout<<"NO";
        return 0;
    }

    vector<int> ao,bo;
    int count = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            count++;
            ao.push_back(a[i]);
            bo.push_back(b[i]);

        }
    }

    if(count==2){
        sort(ao.begin(),ao.end());
        sort(bo.begin(),bo.end());
        if(ao==bo){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    
    return 0;
   
}