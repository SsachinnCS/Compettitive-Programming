#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n,m,initial = 1;
    cin>>n>>m;
    long long count = 0;
    for(int i=0;i<m;i++){
        int present ;
        cin>>present;
        if(present >= initial){
            count+=present-initial;
        }
        else{
            count+=(n-initial) + present;
        }
        initial = present;
    }
    cout<<count;
    return 0;
}
