#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

int main(){
    optimize();

    string s;
    cin>>s;

    string ans = "";

   sort(s.begin(),s.end());

   vector<string>permutation;

   do{
    permutation.push_back(s);
   }
   while (next_permutation(s.begin(),s.end()));

   cout<<permutation.size()<<endl;
   for(auto &str:permutation)cout<<str<<endl;
   return 0;
}

