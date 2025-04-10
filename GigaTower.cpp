#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int n,c(0);
    cin>>n;
    
   while(true){
    n++,c++;
    stringstream ss;
    string s;
    ss<<n;
    ss>>s;
    if(s.find('8')!=-1){
        cout<<c;
        return 0;
    }
   }
   
}