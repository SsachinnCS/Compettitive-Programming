#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int>pq;
    int arr[]={7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    for(auto a:arr){
        pq.push(a);
        if(pq.size()>(n-k+1))pq.pop();
    }

    // for(int i=0;i<n-(k);i++){
    //     pq.pop();
    // }
    //cout<<"Largest kth element - "<<pq.top()<<endl;
    cout<<"Smallest kth element - "<<pq.top()<<endl;
}