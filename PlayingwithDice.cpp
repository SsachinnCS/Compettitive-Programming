#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int a,b;
    cin>>a>>b;

    int aw=0,bw=0,t=0;
    
    for(int i=1;i<=6;i++){
        if(abs(a-i)<abs(b-i))aw++;
        else if(abs(b-i)<abs(a-i))bw++;
        else if(abs(b-i)==abs(a-i))t++;

    }

    cout<<aw<<" "<<t<<" "<<bw;
    

    return 0;
   
}
//