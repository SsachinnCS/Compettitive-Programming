#include<bits/stdc++.h>
using namespace std;


int main(){
    int a = 1231;

    int rev   = 0;

    while(a>0){
        rev = rev*10 + a%10;
        a /= 10;
    }
    cout<<rev;
}

