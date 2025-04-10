#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][3], sum = 0;

    // Read the input 
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            rowSum += arr[i][j];
        }
        sum = max(sum, rowSum); 
    }

   

    // Adjust the matrix to make it a magic square
    while (true) {
        arr[0][0] = sum - (arr[0][1] + arr[0][2]);
        arr[1][1] = sum - (arr[1][0] + arr[1][2]);
        arr[2][2] = sum - (arr[2][0] + arr[2][1]);

        int diagSum1 = arr[0][0] + arr[1][1] + arr[2][2];
        int diagSum2 = arr[0][2] + arr[1][1] + arr[2][0];
        if (diagSum1 == sum && diagSum2 == sum) break; // Stop if both diagonal sums match the target
        sum++; // Increase the target sum if the diagonals don't match
    }

    
    cout <<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
