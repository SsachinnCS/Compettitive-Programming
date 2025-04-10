#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n,m;
    cin>>n>>m;

    string s1="",s2="",s3="";

    for(int i = 0 ; i<m ;i++){
        s1+="#";
        if(i==m-1)s2+="#";
        else s2+=".";

        if(i==0)s3+="#";
        else s3+=".";
    }
   
   for(int i = 0 ; i<n ;i++){
    if(i%2==0)cout<<s1<<"\n";
    else {
        if((i/2)%2==0)cout<<s2<<"\n";
        else cout<<s3<<"\n";
    }
   }
    
    
    return 0;
}