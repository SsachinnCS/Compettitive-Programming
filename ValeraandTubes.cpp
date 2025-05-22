#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long
const int MOD = 1e9 + 7;

int main(){


    int n,m,k;
    cin>>n>>m>>k;

    vector<pair<int,int> >cells;

    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;++j){
                cells.emplace_back(i+1,j+1);
            }
            
        }
        else {
            for(int j=m-1;j>=0;--j){
                cells.emplace_back(i+1,j+1);
            }
        }
    }

    int idx = 0;

for(int i=0;i<k-1;++i){
    cout<<"2 "<<cells[idx].first<<" "<<cells[idx].second<<" ";
    idx++;
    cout<<cells[idx].first<<" "<<cells[idx].second<<endl;
    idx++;
}

cout<<cells.size()-idx<<" ";
while (idx < cells.size())
{
    cout<<cells[idx].first<<" "<<cells[idx].second<<" ";
    idx++;
}

}

