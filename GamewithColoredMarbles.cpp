// #include<bits/stdc++.h>
// #define FOR(a, b, c) for(auto i = a; i < b; i += c)

// using namespace std;

// int main(){
//     ios::sync_with_stdio(false); cin.tie(0);
    
//        int t;
//        cin>>t;

//        while(t--){
//         int n;
//         cin>>n;

//     int brr[1000] ={};
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//             brr[arr[i]]++;
//         }

        

//         sort(arr,arr+n);

//         int size = 0;
//     if(n%2 == 0) size = size/2;
//     else size = ((size/2) +1);
//         int al[size]={};
//         int bo[n-size]={};

//     int b=0,a = 0,ac=0;
//         for(int i=0;i<n;i++){
//             if(i%2==0){
//                 bo[b]=arr[i];
//                 b++;
//             }
//             else{
//                auto it = find(al, al + size, arr[i]);
//                if(!it){
//                 ac++;
//                }
//                 al[a]=arr[i];
                
//                 a++;
//             }
//         }





//        }

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
        int n;
        cin >> n;
        vector<int> marbles(n);
        unordered_map<int, int> freq;

        // Step 1: Read marbles and calculate frequency of each color
        for (int i = 0; i < n; i++) {
            cin >> marbles[i];
            freq[marbles[i]]++;
        }

        // Step 2: Store the frequencies in a vector and sort it in descending order
        vector<int> counts;
        for (auto [color, count] : freq) {
            counts.push_back(count);
        }
        sort(counts.rbegin(), counts.rend());

        // Step 3: Simulate the game
        int aliceScore = 0, aliceFullColorCount = 0;
        bool aliceTurn = true; // Alice starts the game
        vector<int> remaining(counts.begin(), counts.end());

        // Step 4: Process the colors
        for (int &count : remaining) {
            if (count == 0) continue; // If no more marbles of this color, skip

            if (aliceTurn) {
                // Alice takes a marble
                aliceScore++;
                count--;

                // If Alice takes all marbles of this color, give her an extra point
                if (count == 0) {
                    aliceFullColorCount++;
                }
            } else {
                // Bob takes a marble, and tries to minimize Alice's score
                if (count > 0) count--;
            }
            aliceTurn = !aliceTurn; // Switch turns
        }

        // Step 5: Calculate Alice's total score
        cout << aliceScore + aliceFullColorCount << "\n";
    }

    return 0;
}
