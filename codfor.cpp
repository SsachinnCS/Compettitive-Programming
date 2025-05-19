#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

vector<int>dp,coins;

// vector<int>get(int n){
//     vector<int>s;
//     while(n>0){
//      if(n%10 != 0)s.push_back(n%10);
    
//     n/=10;
//     }
//     return s;
// }

int f(int n){
    if(n==0)return 0;
    //if(n<=9)return 1;
    if(dp[n]!=-2)return dp[n];
    int result= INT_MAX;
    //vector<int>r= get(n);

    for(int i=0;i<coins.size();i++){
        if(n-coins[i]<0)continue;
        result = min(result,f(n-coins[i]));

        
    }
    if(result==INT_MAX)return dp[n]=INT_MAX;
    return dp[n]=1+result;
}

int main() {
    optimize();
    dp.clear();
    dp.resize(1000005,-2);
   int n,x,a;
   cin>>n>>x;
   for(int i=0;i<n;i++){
    cin>>a;
    coins.push_back(a);
   }
   int aans = f(x);
    if(f(x)!=INT_MAX)cout<<aans;
    else cout<<-1<<endl;
    
    return 0;
}
