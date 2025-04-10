#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
   int  n,a,b,cnt(0);
   cin>>n;
    vector<int>arr(101,0),brr(101,0);

   while(n--){
    cin>>a>>b;
    arr[a]++;brr[b]++;
}
    int acont = 0 ,bcnt = 0;
    for(int i=0;i<101;i++){
    // acont+=(arr[i]>0);
    // bcnt +=(brr[i]>0);

    if(arr[i]>0) acont++;
    if(brr[i]>0)bcnt ++;
    }

    cout<<min(acont,bcnt);
    return 0;
}

// #pragma GCC optimize("Ofast")

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng64(chrono::steady_clock::now().time_since_epoch().count());

// int main(int argc, char* argv[]) {
// 	ios_base::sync_with_stdio(0); cin.tie(NULL);
	
// 	int n; cin >> n;
	
// 	vector<int> cntx(101, 0);
// 	vector<int> cnty(101, 0);
	
// 	while (n--) {
// 		int x, y;
// 		cin >> x >> y;
// 		cntx[x]++; cnty[y]++;
// 	}
	
// 	int distinctx = 0, distincty = 0;
// 	for (int i=0; i<101; i++) {
// 	    distinctx += (cntx[i] > 0);
// 	    distincty += (cnty[i] > 0);
// 	}
	
// 	cout << min(distinctx, distincty) << endl;
	
// 	return 0;
// }