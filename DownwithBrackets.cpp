#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long
const int MOD = 1e9 + 7;


void solev(){

    string s;
    cin>>s;

   int bal = 0;
   for(int i=1;i<s.size()-1;i++){
    if(s[i]=='(')bal++;
    else bal--;
    if(bal<0){cout<<"YES"<<endl;
    return;
}
   }

   if(bal==0)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
   

}


int main(){
    int t;
    cin>>t;

    while(t--){
        solev();
    }
}