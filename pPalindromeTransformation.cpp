#include<bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long
const int MOD = 1e9 + 7;

bool isPalindrome(string s, int n) {
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-1-i]) return false;
    }
    return true;
}

int main(){

    int n,p;
    string s;

    cin>>n>>p>>s;
    p--;

    if (isPalindrome(s, n)) {
        cout << 0 << endl;
        return 0;
    }

    //Count Total No Of Changes
    int left= 0,right=n-1,count(0);
    while(left<right){
        if(s[left]!=s[right]){
            int diff=abs(s[left]-s[right]);
            count += min(diff,26-diff);
        }
        right--;left++;
    }

     // Second pass: calculate cursor movement cost
    if (p >= n/2) p = n - 1 - p; // Mirror position if in right half

    //First Change and Last Change
    int fstC = -1,lstC = -1;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            if(fstC == -1)fstC = i;
            lstC=i;
        }
        
    }

        if (fstC == -1) {
        cout << 0 << endl;
        return 0;
    }

    int movement = 0;
    //Traversal fron left right viceversa
    if(p<=fstC)movement=lstC-p;
    else if(p>=lstC)movement=p-fstC;
    else{
        movement=min(2*(lstC-p)+(p-fstC) , 2*(p-fstC) + (lstC-p));
    }

    cout<<count+movement<<endl;
    return 0;
}