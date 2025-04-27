#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

int gcd(int a,int b){
    return b==0 ?abs(a):gcd(b,a%b);
}

int main() {
    optimize();
  
    int n,x,y,x0,y0,a,b;
    cin>>n>>x0>>y0;

    bool check = false;

    set<pair<int,int>> ans;

    for(int i=0;i<n;i++){
        cin>>x>>y;

        int dx = x-x0;
        int dy = y-y0;

        if(dx==0 && dy==0)continue;

        int g=gcd(dx,dy);
        dx/=g;
        dy/=g;

        if(dx <0 ){
            dx = -dx;
            dy = -dy;
        }
        else if(dx==0 && dy<0)dy=-dy;

        ans.insert({dx,dy});
    }
   cout<<ans.size();
    return 0;
}