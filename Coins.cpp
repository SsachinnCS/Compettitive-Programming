#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

int main() {
    optimize();
  
    int n;
    cin>>n;
    
    while(n>1){
        cout<<n<<" ";
        for(int i=2;i<=n;i++){
            if(n%i==0){
                n/=i;
                break;
            }
        }
    }
    cout<<1<<endl;
    return 0;
}