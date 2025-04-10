#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> mit(n);
    for (int i = 0; i < n; i++) {
        cin >> mit[i];
    }

    //sort(mit.begin(), mit.end());

   int l=0,r=0,count=0,time=0;
   while(r<n){
    time+=mit[r];
    
    while(time>t){
        time -=mit[l];
        l++;
    }
    count=max(count,r-l+1);
    r++;
   }

   cout<<count;
   return 0;
}
