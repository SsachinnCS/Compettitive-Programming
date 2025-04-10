#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if(n <= 2) {
		cout<<("no");
		return 0;
	}
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (i != j) { // Avoid comparing the same segment
                int min1 = min(a[i], a[i+1]), max1 = max(a[i], a[i+1]);
                int min2 = min(a[j], a[j+1]), max2 = max(a[j], a[j+1]);
                
                if ((min1 < min2 && min2 < max1 && max1 < max2) ||
                    (min2 < min1 && min1 < max2 && max2 < max1)) {
                    cout << "yes\n";
                    return 0;
                }
            }
        }
    }

    cout << "no\n";
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false); cin.tie(0);
    
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int mxele = *max_element(arr,arr+n);


//     if(is_sorted(arr,arr+n)){
//         cout<<"no";
//         return 0;
//     }

//     else if(arr[1]==mxele){
//         cout<<"no";
//         return 0;
//         }

//     cout<<"yes"; 
    
    
//     return 0;
   
// }

//Input
// 100
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
