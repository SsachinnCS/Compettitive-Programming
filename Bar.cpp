#include <bits/stdc++.h>
#include<unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,count(0);
    cin>>n;

   unordered_set<string> s;
    s.insert("VODKA");
    s.insert("WHISKEY");
    s.insert("WINE");
    s.insert("TEQUILA");
    s.insert("SAKE");
    s.insert("RUM");
    s.insert("GIN");
    s.insert("CHAMPAGNE");
    s.insert("BEER");
    s.insert("BRANDY");
    s.insert("ABSINTH");

    while(n--){
        string a;
        cin>>a;
        if(!isalpha(a[0])){
            if(stoi(a) < 18)count++;
        }
        else if(s.find(a) != s.end())count++;
    }

    cout<<count;
    return 0;
}