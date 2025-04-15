#include<bits/stdc++.h>
using namespace std;

struct Card
{
    int a,b;
};

bool Compare(const Card &x , const Card &y){
    if(x.b != y.b)return x.b>y.b;
    return x.a > y.a;
}

int main(){

        int n;
        cin>>n;

        vector<Card>cards(n);
        for(int i=0;i<n;i++){
            cin>>cards[i].a>>cards[i].b;
        }

        sort(cards.begin(),cards.end(),Compare);
        int count =1,idx=0,points=0;
        while(count > 0 && idx < n){
            points += cards[idx].a;
            count += cards[idx].b;
            idx++;count--;

        }

        cout<< points;
        return 0;
    
}