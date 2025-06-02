#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N = 1e5 + 10;

vector<int> g[N];
int d[N], h[N]; 

void dfs(int vertex, int par = 0) {
    for (int child : g[vertex]) {
        if (child == par) continue;
        d[child] = d[vertex] + 1;             
        dfs(child, vertex);
        h[vertex] = max(h[vertex], h[child] + 1); 
    }
}

int main() {
    optimize();

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1); 
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": depth = " << d[i] << ", height = " << h[i] << "\n";
    }

    return 0;
}
