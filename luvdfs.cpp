#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

 vector<int>graph[N];
bool vis[N];

void dfs(int vertex){
    vis[vertex]=true;
    cout<<vertex<<endl;
    for(int child : graph[vertex]){
        cout<<"par"<<vertex<<"child"<<child<<endl;
       if( vis[child])continue;
        dfs(child);
    }
    
}

int main(){

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
   dfs(1);

    
}


//Inputt.in +Inputt.in +6 9 1 3 1 5 3 5 3 4 3 6 3 2 2 6 4 6  5 6


// #include <bits/stdc++.h>
// using namespace std;
// const int N=10e5;
// bool vis[N]={0};//initialize all the the visited array value as 0 which means false
// vector<int> graph[N];

// void makelink(int s,int d){
//     graph[s].push_back(d);
//     graph[d].push_back(s);
// }

// void dfs(int v){
//     cout<<v<<endl;
//     vis[v]=true;
//     for(int child:graph[v]){
//         cout<<"par "<<v<<" child "<<child<<endl;
//         if(vis[child]) continue;
//         dfs(child);
//     }
// }

// int main()
// {
//     int v,e;
//     cin>>v>>e;
    
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         makelink(s,d);
//     }
//     cout<<endl;
//     dfs(v);

//     return 0;
// }
