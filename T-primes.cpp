// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false); cin.tie(0);

//     long long int n,m(0),a;
//     cin>>n;
//     vector<long long int>arr;

//  for (long long int i = 0; i < n; i++){
//        cin>>a;
//        arr.push_back(a);
//     }

//     for (long long int i = 0; i < n; i++){
//         m=0;
//       for(long long int j = 1;j<=arr[i];j++){
//         if(arr[i]%j == 0)m++;
//       }
//       if(m==3)cout<<"YES\n";
//       else cout<<"NO\n";
//     }

//     return 0;
   
// }

#include<bits/stdc++.h>
using namespace std;

const long long MAX = 1e6;

vector<bool> sieve() {
    vector<bool> is_prime(MAX + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (long long i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (long long j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    long long n;
    cin >> n;

    vector<bool> is_prime = sieve();
    while (n--) {
        long long x;
        cin >> x;

        // Check if x is the square of a prime
        long long root = sqrt(x);
        if (root * root == x && is_prime[root]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
