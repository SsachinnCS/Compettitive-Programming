#include<bits/stdc++.h>
#define FOR(a, b, c) for(auto i = a; i < b; i += c)

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    bool check = false;

    if(x1==0 || y1==0 || x2==0 || y2 ==0 || x3==0 || y3==0)check=true;
    if(check == false){
        cout<<"NEITHER";
        return 0;
    }

    else{
        if(x1>=0 && x2>=0 && x3>=0){
            cout<<"RIGHT";
            return 0;
        }
        else cout<<"ALMOST";
    }


    return 0;
}