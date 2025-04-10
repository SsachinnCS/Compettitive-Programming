#include<bits/stdc++.h>
using namespace std;

int main(){

//     int n,a,c,b=0,d;
//     cin>>n;
//     bool check = false;

//     vector<int>numbb;
//     while(n>0){
        
//         a = n%10;
//         n /=10;
//         if(a%2==0){
//             check = true;
//             if(c!=a){
//                 c=a;
//                 d=b;
//             }
            
//         }
//         numbb.push_back(a);
//         b++;
//     }

//     if(check){
//         // cout<<c<<"\n";
//         swap(numbb[d],numbb[0]);
//         for (int i = numbb.size() - 1; i >= 0; i--) {
//         cout << numbb[i];
//     }}
//     else cout<<-1<<"\n";
//     // cout<<numbb[d]<<" "<<numbb[0]<<"\n";

    string s;
    cin>>s;

    int n = s.length()-1,ind(n);
    

    for(int i=0;i<n;i++){
        if((s[i]-'0') % 2==0){
            ind = i;
            if(s[n]>s[i])break;
        }
    }
    if(ind==n)cout<<-1;
    else {
        swap(s[ind],s[n]);
        cout<<s;
    }

   
}