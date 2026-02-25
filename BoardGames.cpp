#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const int N = 55; // max 50

int M, N_;
int grid[N][N];
bool visited[N][N];

int dx[4], dy[4];

void solve() {
    cin >> M >> N_;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N_; j++)
            cin >> grid[i][j];

    int start_r, start_c, dest_r, dest_c;
    cin >> start_r >> start_c;
    cin >> dest_r >> dest_c;

    int move_x, move_y;
    cin >> move_x >> move_y;

    // If already at destination
    if (start_r == dest_r && start_c == dest_c) {
        cout << 0 << endl;
        return;
    }

    memset(visited, false, sizeof(visited));
    queue<tuple<int, int, int>> q;
    q.push({start_r, start_c, 0});
    visited[start_r][start_c] = true;

    // 4 directions based on move rule
    int moves[4][2] = {
        { move_x,  move_y},     // forward
        { move_y, -move_x},     // right (90 CW)
        {-move_y,  move_x},     // left (90 CCW)
        {-move_x, -move_y}      // back (180)
    };

    while (!q.empty()) {
        auto [r, c, dist] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nr = r + moves[i][0];
            int nc = c + moves[i][1];

            if (nr == dest_r && nc == dest_c) {
                cout << dist + 1 << endl;
                return;
            }

            if (nr >= 0 && nr < M && nc >= 0 && nc < N_ &&
                grid[nr][nc] == 0 && !visited[nr][nc]) {
                visited[nr][nc] = true;
                q.push({nr, nc, dist + 1});
            }
        }
    }

    // As per constraints, solution always exists.
    // If unreachable, we would have returned -1.
}
 
int main() {
    optimize();

    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    solve();

    return 0;
}
