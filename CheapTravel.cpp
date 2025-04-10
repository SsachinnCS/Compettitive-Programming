#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n,m,a,b;
    cin>>n>>m>>a>>b;


    int res = INT_MAX;
    if(n%a==0)res = n*a;
    // int ans = ((n/m)*b) + ((n%m)*a);
    // int anss = (((n/m)*b)  +  b  ) ;

    
    // cout<<min(res,min(ans,anss));



    int ans = ((n/m)*b) + min(((n%m)*a),b);
    

    
    cout<<min(res,ans);
        
 

    return 0;
}