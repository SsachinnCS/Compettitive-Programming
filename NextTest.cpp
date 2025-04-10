#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

  
    unordered_set<int>present(arr.begin(), arr.end());

   
    int smallestMissing = 1;
    while (present.count(smallestMissing)) {
        smallestMissing++;
    }

    cout << smallestMissing;
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin>>n;

//     int maxx= INT_MIN;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         maxx = max(maxx,arr[i]);
//     }

//     int idx = 0;
//     for(int i=1;i<=maxx;i++){
//         for(int j=0;j<n;j++){
//         if(arr[j]==i)break;
//         if(arr[j]!=i)idx= i;

//     }
//     }

//     cout<<idx;
// }