// #include<bits/stdc++.h>
// using namespace std;

// struct Food{
//     long long initial_value;
//     long long decay_rate;
//     long long current_value;

//     bool operator < (const Food& other)const{
//         return current_value < other.current_value;
//     }

// };

// void solve(){
//     int n;
//     cin>>n;

//     long long m;
//     cin>>m;

//     vector<long long>v(n),d(n);

//     for(int i=0;i<n;i++)cin>>v[i];
//     for(int i=0;i<n;i++)cin>>d[i];

//     priority_queue<Food>pq;


//     for(int i=0;i<n;i++){
//         if(v[i]>0)pq.push({v[i],d[i],v[i]});
//     }

//     long long total_taste_points = 0;
//     long long meal_eaten = 0;

//     while(!pq.empty() && meal_eaten < m){
//         Food topfood = pq.top();
//         pq.pop();

//         if(topfood.current_value <= 0)break;

//         total_taste_points += topfood.current_value;
//         meal_eaten++;

//         topfood.current_value -= topfood.decay_rate;
//         if(topfood.current_value > 0)pq.push(topfood);
//     }

//     cout<<total_taste_points<<endl;
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;


struct Food{
    long long current_value;
    long long decay_value;
    long long initial_value;

    bool operator < (const Food& other)const{
        return current_value < other.current_value;
    }
};

void solve(){

    int n;
    cin>>n;

    long long m;
    cin>>m;


    vector<long long>v(n),d(n);

    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++)cin>>d[i];

    priority_queue<Food>pq;

    for(int i=0;i<n;i++)pq.push({v[i],d[i],v[i]});

    long long meal_eaten = 0;
    long long taste_points = 0;
    while(!pq.empty() && meal_eaten<m){

        Food top_food = pq.top();
        pq.pop();

        if(top_food.current_value <=0)break;

        taste_points += top_food.current_value;
        meal_eaten++;

        top_food.current_value -= top_food.decay_value;
        if(top_food.current_value >0)pq.push(top_food);
    }

    cout<<taste_points<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}