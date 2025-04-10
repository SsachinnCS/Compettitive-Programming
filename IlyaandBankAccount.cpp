#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin>>n;
    int a=0 ;
    int max =0;

    if(n >=0)cout<<n;
    else{
        if(n/10 > n)max = n/10;
        if(n%10 + (n/100)*10 > max)max = n%10 + (n/100)*10;

        cout<<max;

    }


    

    return 0;
}