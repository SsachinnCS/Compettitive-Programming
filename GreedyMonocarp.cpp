// #include<bits/stdc++.h>

// using namespace std;


// int main(){
//     ios::sync_with_stdio(false); cin.tie(0);



//     int t;
//     cin>>t;

//     int mincoin = 0;
//     int sum = 0;

//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//         int sumAccumulate = accumulate(arr, arr+n, 0);

//         sort(arr,arr+n);

//         for(int i=n-1;i>=0;i--){
//             if(k==arr[i]){
//                 cout<<0<<"\n";
//                 continue;
//             }
//         }

     
//         if(sumAccumulate<k){
//             cout<<k-sumAccumulate<<"\n";
//             continue;
//         }
//         else if(sumAccumulate==k){
//             cout<<0<<"\n";
//            continue;
//         }

//         else{
//             for(int i=n-1;i>=0;i--){
//                  sum = sum+ arr[i];
//                  int two = k-sum;
//                  if(two>0){
//                     mincoin = min(mincoin,two);
//                 }

//             }
//         }
//     }
//     cout<<mincoin<<"\n";
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int sumAccumulate = accumulate(a.begin(), a.end(), 0);

        if (sumAccumulate < k) {
            // Not enough coins, add the difference
            cout << k - sumAccumulate << "\n";
            continue;
        }

        // Sort chests in descending order
        sort(a.rbegin(), a.rend());

        int currentSum = 0;
        int minAdd = 0;

        for (int i = 0; i < n; i++) {
            currentSum += a[i];
            if (currentSum <= k) {
              
                    minAdd = (minAdd,k-currentSum);
                }
               
            
    
        }

        cout << minAdd << "\n";
    }

    return 0;
}
