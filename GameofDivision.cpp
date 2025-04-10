#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t; 

    while (t--) {
        int n, k;
        cin >> n >> k;  
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());  

       
        for (int i = 1; i < n; i++) {  
            if (abs(arr[i] - arr[i - 1]) % k == 0) {
                cout << "NO\n";
               break;
               
            }
            else {
            cout << "yes\n";
            
        }
        }


   
}}
