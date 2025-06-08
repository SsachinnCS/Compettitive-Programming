#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

vector<pair<int,int>> moves;

void hanoi(int n ,int from , int to , int aux){
    if(n==0)return ;

    hanoi(n-1,from,aux,to);
    moves.push_back({from,to});
    hanoi(n-1,aux,to,from);
}


int main(){

    optimize();
    ll n;
    cin>>n;

    hanoi(n,1,3,2);

    cout<<moves.size()<<endl;
    for(auto [a,b]:moves)cout<<a<<" "<<b<<endl;
    return 0;
}