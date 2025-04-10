#include<bits/stdc++.h>
using namespace std;

int main(){


    string  n ;
    cout<<"Enter a string to check for palindrom number : ";
    getline(cin,n);

   string b = "";
   for(int i= 0 ;i<n.size();i++){
    //if(n[i]!=' ' && n[i]!= ',')b+=n[i];
    if(isalpha(n[i]))b+=n[i];
    }

 string c  = b;
 reverse(b.begin(),b.end());
 if(b==c){
    cout<<"Valid palindrom";
    return 0;
    }
    else {
        cout<<"Not a valid Palindrom";
        return 0 ;
    }
   
//     getline(cin,n);

//     int l = 0;
//     int r = n.size()-1;

//     while(l<r){
//         if(n[l]==n[r]){
//             l++;
//             r--;
//     }
//     else {
//         cout<<"Not a palindrom ";
//         return 0 ;
//     }
// }
// cout<<"Is a palindrom";

    

}