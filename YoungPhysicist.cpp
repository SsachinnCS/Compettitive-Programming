#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n,x1,y1,z1,sumx=0,sumy=0,sumz=0;
    cin>>n;

    // vector<int> x(n),y(n),z(n);


    // for(int i = 0 ;i<n ; i++){
    //     cin>>x[i]>>y[i]>>z[i];
    // }

    // int sumx = accumulate(x.begin(), x.end(), 0);
    // int sumy = accumulate(y.begin(), y.end(), 0);
    // int sumz = accumulate(z.begin(), z.end(), 0);

    // //cout<<sumx<<" "<<sumy<<" "<<sumz<<"\n";
    // if(sumx==0 && sumy==0 && sumz==0)cout<<"YES";
    // else cout<<"NO";

    while (n--)
    {
        cin>>x1>>y1>>z1;
        sumx +=x1;
        sumy+=y1;
        sumz+=z1;

        
    }
    if(sumx==0 && sumy==0 && sumz==0)cout<<"YES";
    else cout<<"NO";
    
    return 0;


}