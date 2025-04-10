#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    
    int s11 = (r1+c1-d2)/2;
    int s12 = r1-s11;
    int s21 = c1-s11;
    int s22 = d1-s11;

    if(s11!=s12 && s11!=s21 && s11!=s22 && s12!=s21 && s12!=s22 && s21!=s22 && s11+s21==c1 && s12+s22==c2 && s11+s12==r1 && s21+s22==r2 && s11+s22==d1 && s12+s21==d2 && s11 >= 1 && s11 <= 9
        && s12 >= 1 && s12 <= 9
        && s21 >= 1 && s21 <= 9
        && s22 >= 1 && s22 <= 9){
        cout<<s11<<" "<<s12<<"\n";
        cout<<s21<<" "<<s22<<"\n";
    }
    else cout<<"-1\n";

    
    return 0;
   
}