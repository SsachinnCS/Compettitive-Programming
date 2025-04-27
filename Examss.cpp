#include <bits/stdc++.h>
using namespace std;

#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main() {
    optimize();

    int n;
    cin>>n;

   vector<pair<int,int>> exam(n);
   int lastDay=0;
   for(int i=0;i<n;i++){
    cin>>exam[i].first>>exam[i].second;
   }
    sort(exam.begin(),exam.end());

    
    for(int i=0;i<n;i++){
        int a=exam[i].first,b=exam[i].second;
        if(b>=lastDay)lastDay=b;
        else lastDay=a;
    }
   
   cout<<lastDay;
}