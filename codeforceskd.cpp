#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long
const int MOD = 1e9 + 7;


void solve(){
     int n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    

        sort(arr.begin(), arr.end());

        int left = 0, right = n - 1;
        
        if((arr[left]+arr[right]) % 2 == 0){
            cout<<0<<endl;
            return ;
        }
        int count = 0,cnt_2=0;
        while (left <= right) {
            if ((arr[left] + arr[right]) % 2 == 0) {
                break;
            } else {
                count++;
                left++;
            }
        }
         left = 0, right = n - 1;
        while (left <= right) {
            if ((arr[left] + arr[right]) % 2 == 0) {
                break;
            } else {
                cnt_2++;
                right--;
            }
        }
        
         cout << min(cnt_2,count) << "\n";
    }


int main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
     solve();

   
}
}
