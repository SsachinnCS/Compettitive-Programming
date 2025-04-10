// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
   
//     int n, count = 0;
//     cin >> n;
//     vector<int> arr(n);
//     vector<int> ans;
//     bool check= false;

//     for (int i = 0; i < n; i++) {
//         int a;
//         cin >> a;
//         string s = to_string(a);
        
//         // Check if '0' is found in the string
//         if (s.find('0') != string::npos) {
//             count++;
//             ans.push_back(a);
           
//         }
//         else arr.push_back(a);
//     }
    
//     int minel = *min_element(arr.begin(),arr.end());
//     if(arr.size() > 0){
//         count++;
//         check = true;
        
//     }

//     cout << count << "\n";
//     if(check)cout<<minel<<" ";
//     for (int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   
    int n, count = 0;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans;
    int minElement = INT_MAX; 
    bool foundMin = false;  

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        string s = to_string(arr[i]);
        
       
        if (s.find('0') != string::npos) {
            count++;
            ans.push_back(arr[i]); 
        } else {
            minElement = min(minElement, arr[i]); 
            foundMin = true; 
        }
    }

   
    if (foundMin) count++;
    cout << count << "\n";

    
    if (foundMin) cout << minElement << " ";

    
    for (int num : ans) {
        cout << num << " ";
    }

    cout << "\n";

    return 0;
}
