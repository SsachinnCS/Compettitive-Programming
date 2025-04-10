#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n, ai, oddNo = 0, evNo = 0, odPos = 0, evPos = 0;
	cin >> n;
	for(int i = 1; i <= n; ++i){
		cin >> ai;
		if(ai % 2==0){ ++oddNo; odPos = i;}
		else{++evNo; evPos = i;}
	}
	if(oddNo < evNo) cout << odPos << "\n";
	else cout << evPos << "\n";
	return 0;
}
   