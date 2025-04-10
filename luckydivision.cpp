#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int i;
//     cin>>i;
    
//     bool check = false;
//     if(i%4==0 || i%7==0){
//     check = true;;
//     }

//     else{
//         check = true;
//         int temp = i;
//         while(temp>0){
//             int a = temp%10;
//             if(a!=4 && a!=7){
//                 check=false;
//                 break;
                
//             }
//             temp = temp/10;
//         }
//     }
//     if(check)cout<<"YES\n";
//     else cout<<"NO\n";

// }

int main(){
    int no;
    cin>>no;
    
    bool flag = false;

    int arr[]={4,44,444,7,77,777,47,477,447,474,744,74};
    for(int i = 0 ; i<11;i++){
        if(no%arr[i]==0){
            cout<<"YES\n";
            flag=true;
            break;
        }
    }
    if(!flag)cout<<"NO\n";
    return 0;
}