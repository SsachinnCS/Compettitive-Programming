#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

void solev() {
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int arrays = 1;  
    int j=0;
    for (int i = 1; i < n; i++) {
        if (arr[j]+1  < arr[i]) {
             arrays++; 
             j=i;
             
            
        }
        
    }

    cout << arrays << endl;
}

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        solev();
    }
}
