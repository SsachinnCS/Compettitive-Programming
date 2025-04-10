#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    

    while (t--) {
        int count = 0;
        int n;
        cin >> n;
        
        

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];  
        }

        if(n==0 || n==1){
            cout <<count<<endl; 
            break;
            }

        int mid = n / 2;  

       
        for (int i = 0; i < mid; i++) {
            if (arr[i] > arr[mid]) {  
                count++;
            }
        }

        
        for (int i = mid + 1; i < n; i++) {
            if (arr[i] < arr[mid]) {  
                count++;
            }
        }

        cout <<count<<endl; 
    }
    return 0;
}