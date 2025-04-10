// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false); 
//     cin.tie(0);
//     int n;
//     cin>>n;
//    int l(0),r(0);
    

//     bool check= false;

//     for(int i=0;i<n;i++){
//         int x,y ;cin>>x>>y;
//         if(n== 1 & x%2 + y%2 ==1){
//             cout<<-1;
//             return 0;
//         }
//         if(x%2 + y%2 ==1){
//             check = true;
//             l+=x;
//             r+=y;
//         }
//     }
//     if(l%2==0 && r%2==0)cout<<"0";
//     else if(l%2==1 && l%2==1 && check)cout<<"1";
//     else cout<<"-1";

    
       
//     return 0;
// }


#include <iostream>
using namespace std;

int main ()
{
    int n, l(0), r(0);
    cin >> n;
    bool s(false);
    for (int x, y; cin >> x >> y;)
    {
        if (n == 1 and x % 2 + y % 2 == 1)
        {
            cout << -1;
            return 0;
        }
        if (y % 2 + x % 2 == 1)
            s = true;
        l += x;
        r += y;
    }
    if (l % 2 == 0 and r % 2 == 0) cout << 0 << endl;
    else if (l % 2 == 1 and r % 2 == 1 and s) cout << 1 << endl;
    else cout << -1 << endl;
    return 0;
}