#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);

int main(){
    optimize();

    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r,idx;
        cin >> n >> m >> l >> r;
        
       int arr[n+1];
        arr[0]=l;
        for(int i=1;i<=n;i++){
            arr[i]=l+i;
            if(arr[i]==0)idx=i;
        }

        //for(auto it:arr)cout<<it<<" ";
        //cout<<idx;
        int a=idx,b=idx;
        for(int i=0;i<m;i++){
            if(i%2==0 && a>=0 )a--;
            else if(b<=n)b++;
            
        }
        cout<<arr[a]<<" "<<arr[b]<<endl;
    }
}
