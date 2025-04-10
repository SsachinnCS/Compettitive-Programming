#include<bits/stdc++.h>
#define FOR(a, b, c) for(auto i = a; i < b; i += c)

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
        // Redirect standard input/output to files
    freopen("input.txt", "r", stdin);   // Read from "input.txt"
    freopen("output.txt", "w", stdout); // Write to "output.txt"
    
    int n,a,b;
    cin>>n;
    for(int i=0;i<3;i++){
        cin>>a>>b;
        if(b==n){
           n=a;
        }
        else if(a==n){
            n=b;
        }
    }

   cout<<n;


    return 0;
}