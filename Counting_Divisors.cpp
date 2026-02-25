#include<bits/stdc++.h>
using namespace std;
const int N = 1000001;
long long divisor[N];

void precompute(){
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            divisor[j]++;
        }
    }
}


int main(){
    long long n;
    cin>>n;
    precompute();
    while(n--){
        long long x;
        cin>>x;
        
        
        cout<<divisor[x]<<endl;
    }
}