#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
   string  s;
   cin>>s;

   long long pivot = s.find('^');
   long long left=0,right=0;

   for(int i=0;i<=pivot;i++){
    if(s[i]!='='){
        left+=(pivot-i) * (s[i]-'0');
    }
   }

    for(int i=pivot+1;i<s.size();i++){
    if(s[i]!='='){
        right+=(i-pivot) * (s[i]-'0');
    }
   }

   if(left==right)cout<<"balance";
   else if(right>left)cout<<"right";
   else cout<<"left";
   return 0;

   
}