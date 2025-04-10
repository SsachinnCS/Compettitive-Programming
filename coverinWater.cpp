#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
   int n;
   string s;
   cin>>n;
   cin>>s;
    int count = 0;
   for(int i = 0 ; i<n-2 ; i++){
    if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
        count = 2;
        break;
        
    }
    
   }
   if(count == 0){ 
    for(int i = 0 ; i<n ; i++){
    if(s[i]=='.'){
        count++;
        }
    
   }}
   cout<<count<<'\n';
  }

}
