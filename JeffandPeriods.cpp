#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);

int main(){

    optimize();

    int n,a;
    cin>>n;

    map<int,vector<int> > pos;
    for(int i=0;i<n;i++){
        cin>>a;
        pos[a].push_back(i);
    }
   vector<pair<int,int>>ans;
    for(auto &[value,indices] :pos){
      
        if(indices.size()==1)ans.push_back({value,0});
        else {
            int dif = indices[1]-indices[0];
            bool valid = true;
            for(int i =2;i<indices.size();i++){
                if(indices[i]-indices[i-1]!=dif){
                    valid = false;
                    break;
                }
               
            }
            if(valid) ans.push_back({value,dif});
        }
    }
    cout<<ans.size()<<endl;
    for(auto &[value,diff]:ans){
        cout<<value<<" "<<diff<<endl;
    }
    return 0;
}