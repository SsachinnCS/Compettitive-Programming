#include <bits/stdc++.h>
using namespace std;

long long count_ge(long long x, vector<long long>& v, vector<long long>& d){
    long long cnt = 0;
    int n = v.size();

    for(int i = 0; i < n; i++){
        if(v[i] < x) continue;

        long long t = (v[i] - x) / d[i] + 1;
        cnt += t;
    }

    return cnt;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    vector<long long> v(n), d(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++) cin >> d[i];

    long long total_cnt = 0;
    long long total_sum = 0;

    for(int i = 0; i < n; i++){

        long long t_max = (v[i] - 1) / d[i] + 1;

        total_cnt += t_max;

        total_sum += t_max * v[i] - d[i] * t_max * (t_max - 1) / 2;
    }

    if(total_cnt <= m){
        cout << total_sum << "\n";
        return 0;
    }

    long long lo = 0, hi = *max_element(v.begin(), v.end());

    while(lo < hi){
        long long mid = (lo + hi + 1) / 2;

        if(count_ge(mid, v, d) >= m)
            lo = mid;
        else
            hi = mid - 1;
    }

    long long T = lo;

    long long cnt_gt = 0;
    long long sum_gt = 0;

    long long x = T + 1;

    for(int i = 0; i < n; i++){

        if(v[i] < x) continue;

        long long t = (v[i] - x) / d[i] + 1;

        cnt_gt += t;

        sum_gt += t * v[i] - d[i] * t * (t - 1) / 2;
    }

    long long ans = sum_gt + (m - cnt_gt) * T;

    cout << ans << "\n";
}