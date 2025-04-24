#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

int main() {
    optimize();
   int n,m,d;
   cin>>n>>m>>d;
   int arr[n][m];
   vector<int>brr(n*m);
   for(int i=0;i<n*m ;i++){
    cin>>brr[i];
   }

    int mod = brr[0]%d;
   for(int i=0;i<n*m;i++){
        if(brr[i]%d != mod){
            cout<<-1<<endl;
            return 0;
        } 
   }
   sort(brr.begin(),brr.end());
   int no = brr[(n*m) /2];
   int count =0;
   for(int i=0;i< n*m ;i++){
    count+=abs(brr[i] - no) / d;


   }
   cout<<count<<endl;
}