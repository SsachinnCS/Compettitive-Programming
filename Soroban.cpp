#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
   int n;
   cin>>n;

   string one = "O-|O-OOO";
   string two = "O-|OO-OO";
   string three = "O-|OOO-O";
   string four = "O-|OOOO-";
   string five = "-O|-OOOO";
   string six = "-O|O-OOO";
   string seven = "-O|OO-OO";
   string eight = "-O|OOO-O";
   string nine = "-O|OOOO-";

  if(n==0){cout<<"O-|-OOOO"<<"\n";return 0;}
  while(n){
    int digit = n%10;
    if(digit<5){
        if(digit==0)cout<<"O-|-OOOO"<<"\n";
        else if(digit==1)cout<<one<<"\n";
        else if(digit==2)cout<<two<<"\n";
        else if(digit==3)cout<<three<<"\n";
        else cout<<four<<"\n";
    }
    else{
        if(digit==5)cout<<five<<"\n";
        else if(digit==6)cout<<six<<"\n";
        else if(digit==7)cout<<seven<<"\n";
        else if(digit==8)cout<<eight<<"\n";
        else cout<<nine<<"\n";
    }
    n/=10;
  }
  return 0;

}