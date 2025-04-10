#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
   set<char>a,b;
   string s;
   int n;
   cin>>n;

   for(int i=0;i<n;i++){
    cin>>s;
    for(int j=0;j<n;j++){
        if(i==j || i+j == n-1)a.insert(s[j]);
        else b.insert(s[j]);
    }
   }
     if (a.size() == 1 and b.size() == 1 and *a.begin() != *b.begin())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
   
}