
#include <iostream>
#include <algorithm>

using namespace std;

const int
    MAXM = 20000;

int N, M;
int step[MAXM];

int main()
{
    cin >> N >> M;

    for (int i = 0; i < M; ++i) cin >> step[i];

    sort(step, step + M);


    if (step[0] == 1 || step[M - 1] == N)
    {
                    cout << "NO" << endl;
                    return 0;
    }

    for (int i = 0; i < M - 2; ++i)
        if (step[i] + 1 == step[i + 1] && step[i + 1] + 1 == step[i + 2])
        {
                cout << "NO" << endl;
                return 0;
        }

    cout << "YES" << endl;

    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int m,n;
//     cin>>n>>m;
//     bool check = true;
//     vector<int>arr,brr;
//     for(int i=0;i<m;i++){
//         int value;
//         cin>>value;
//         arr.push_back(value);
//     }
//     sort(arr.begin(),arr.end());
//     //for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";

//     for(int i=0;i<=n;i++){
//         if (find(arr.begin(), arr.end(), i) != arr.end())
//         continue;
//     else
//     brr.push_back(i);
//     //cout<<i<<" ";
//     }

//     for(int i =0 ;i<brr.size()-1;i++){
//         if(brr[i+1]-brr[i] > 3){
//             check=false;
//             break;
//         }
//     }
//     if(check && brr[brr.size()-1]==n)cout<<"YES";
//     else cout<<"NO";
// }  