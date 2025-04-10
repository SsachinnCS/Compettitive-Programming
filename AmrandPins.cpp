#include<bits/stdc++.h>
using namespace std;

int main(){

    int r, x, y, x1,y1;
    cin>>r>>x>>y>>x1>>y1;

    if((x==0 && x1 ==0 ) || (y==0 && y1 ==0 ) ){
        cout<<1;
        return 0;
    }
    else {
        cout<<abs(x-x1);
        return 0;
    }

}