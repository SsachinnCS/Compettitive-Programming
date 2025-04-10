#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// int main(){
//     ios::sync_with_stdio(false); 
//     cin.tie(0);
//     int a,b,r;
//     cin>>a>>b>>r;
     
//      int Recarr = a*b;
//      float Care = 2*r*r*3.14;

//      int ans = Care/Recarr;

//      if(ans%2==0)cout<<"Second ";
//      else cout<<"First";
//     return 0;
// }


int main()
{   int a,b,r;
    cin>>a>>b>>r;
    if(a>=2*r && b>=2*r)
    {
        cout<<"First";
    }
    else
    {
        cout<<"Second";
    }
}