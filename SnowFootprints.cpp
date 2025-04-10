#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    string s;
    cin>>s;

    

    for(int i=0;i<n;i++){
       if(s[i]!='.'){
        if(s[i]=='R'){
            while(s[i]=='R'){
            ++i;
        }
         cout<<i<<" "<<i+1;
        }
       else cout<<i+1<<" "<<i;
        break;
       }
      
      
    }

    

    return 0;
}