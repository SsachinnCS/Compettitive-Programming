#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n,a;
    cin>>n;

    vector<int>t1,t2,t3;

    
  
   
    for(int i = 1 ;i<=n ; i++){
        cin>>a;
        if(a==1)t1.push_back(i);
        else if(a==2)t2.push_back(i);
        else if(a==3)t3.push_back(i);
    }

    if(t1.size() > 0 && t2.size()>0 && t3.size()>0){
        int ans = min(t1.size(),min(t2.size(),t3.size()));
        cout<<ans<<"\n";
        for(int i = 0 ; i<ans ;i++){
            cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<"\n";
        }
    }
    else cout<<"0\n";


    

    return 0;
}