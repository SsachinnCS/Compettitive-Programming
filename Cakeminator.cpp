#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int r,c,rn = 0,cn=0;
    cin>>r>>c;

    char arr[r][c];

 for(int i =0 ; i<r;i++){
        for(int j = 0 ; j<c;j++){
            cin>>arr[i][j];
            
                
        }
        
    }
    
    for(int i =0 ; i<r;i++){
        for(int j = 0 ; j<c;j++){
            
            if(arr[i][j]=='S'){
                rn++;
                break;
            }
            
                
        }
        
    }

    long long tr = (r*c) - (c*rn);
    for(int i =0 ; i<c;i++){
        for(int j = 0 ; j<r;j++){
            
            if(arr[j][i]=='S'){
                cn++;
                break;
            }
            
                
        }
        
    }
   long long tc = (r*c) - (r*cn);
    long long ti = (r-rn) * (c-cn);
    long long ans = tr+tc-ti;
    cout<<ans<<"\n";
    return 0;


}