#include <bits/stdc++.h>
using namespace std;

int wze(int num){
    int sum = 0,pow =1;
    while(num>0){
        int d = num%10;
        num/=10;
        if(d!=0){
            sum+=d*pow;
            pow*=10;
        }
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    int c = a+b;

    int p = wze(a);
    int q = wze(b);
    int r = wze(c);
   
    if(p+q==r)cout<<"YES";
    else cout<<"NO";
    return 0;
}
