#include<bits/stdc++.h>
using namespace std;



int main(){
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    int m = s1.size();
    int n = s2.size();

    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    // for(int i=0;i<=m;i++)dp[i][0]=0;
    // for(int j=0;j<=n;j++)dp[0][j]=0;

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1])dp[i][j]=1+dp[i-1][j-1];
            else{
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    for(int i=0;i<=m;i++){

        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    string ans = "";
    int i=m,j=n;
    while(i>0 || j>0){
        if(s1[i]==s2[j]){
            ans.push_back(s1[i]);
            i--;j--;
        }
        else{
            if(dp[i-1][j]> dp[i][j-1])i--;
            else j--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<endl<<ans;    
    return 0;
}