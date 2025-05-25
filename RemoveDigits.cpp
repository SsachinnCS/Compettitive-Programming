#include<bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long
const int MOD = 1e9 + 7;

vector<ll>dp;

vector<int>get_digits(int n){
    vector<int>result;
    while(n>0){
        if(n%10 != 0){
            result.push_back(n%10);
        }
        n/=10;
    }
    return result;
}
int f(int n){
    if(n==0)return 0;
    if(n<=9)return 1;
    if(dp[n]!=-1)return dp[n];
    vector<int>digits = get_digits(n);
    int ans = INT_MAX;

    for(int i=0;i<digits.size();i++){
        ans = min(ans,f(n-digits[i]));
    }
    return dp[n]=1+ans;
}

int main(){
    dp.clear();
    dp.resize(1000005,-1);
    int n;
    cin>>n;
    cout<<f(n);
}