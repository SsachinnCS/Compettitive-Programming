#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    long long n,v;
    cin>>n>>v;
    vector<int>ans;
    

    for(int c=1;c<=n;c++){
        long long it;
        cin>>it;
        bool found =false;
        for(int i =0 ;i<it;i++){
            long long pr;
            cin>>pr;
            if(pr<v){
                
                if(!found && pr<v){
                ans.push_back(c);
                found = true;
                }
                
            }
        }
    }

    cout<<ans.size()<<"\n";
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
   
    return 0;


}