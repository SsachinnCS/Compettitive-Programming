#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = 0, j = 0, k = 0;
    int n = a.size(), m = b.size();
    
    res.resize(n + m); // Resize result vector

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            res[k++] = a[i++];
        } else {
            res[k++] = b[j++];
        }
    }

    while (i < n) res[k++] = a[i++];
    while (j < m) res[k++] = b[j++];
}

void mergeSort(vector<int>& v) {
    int n = v.size();
    if (n <= 1) return; // Base case to stop recursion

    int mid = n / 2;
    vector<int> a1(v.begin(), v.begin() + mid);
    vector<int> a2(v.begin() + mid, v.end());

    mergeSort(a1);
    mergeSort(a2);

    merge(a1, a2, v);
}


int main() {
    int arr[] = { 5,2, 7,1,8,0,2, 3,};
    vector<int>res(arr,arr+(sizeof(arr)/sizeof(arr[0])));

    mergeSort(res);
    for (int i =0 ;i<res.size();i++) {
        cout << res[i] << " ";
    }

    return 0;
}
