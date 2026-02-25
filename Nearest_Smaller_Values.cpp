#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cin>>n;

    stack<int>st;
    vector<int>ans(n,0),arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i])st.pop();
        if(!st.empty())ans[i]=st.top()+1;
        st.push(i);
    }
    for(auto a:ans)cout<<a<<" ";
    return 0;
}