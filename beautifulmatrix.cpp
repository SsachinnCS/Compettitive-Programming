#include<bits/stdc++.h>>
#include <iostream>
using namespace std;

int main(){
   
    int c;
    int d;
    

    for(int i = 0 ;i<5;i++){
        for(int j = 0;j<5;j++){
            int a;
            cin>>a;
            if(a==1){
                c=i;
                d=j;
            }
        
        }
    }

   int count = abs(c - 2) + abs(d - 2);

 
    cout<<count;
    return 0;
}