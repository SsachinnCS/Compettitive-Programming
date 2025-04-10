#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);

    long long n;
    cin>>n;
    bool check = false;


    for(long long i=0;i<n;i++ ){
        long long a,b;
        cin>>a>>b;
        if(a!=b){
            check = true;
            break;
        }
    }

    if(check)cout<<"Happy Alex"<<"\n";
    else cout<<"Poor Alex"<<"\n" ;
    return 0;
   
}
//