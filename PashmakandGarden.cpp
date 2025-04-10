#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int arr[] = {0,0,0,1};
    int brr[] = {1,0,1,1};
    int crr[] = {0,0,1,1};
    int drr[] = {1,0,0,1};

    

    int err[4];


    for(int i = 0 ; i<4 ;i++){
        int a;
        cin>>a;
        err[i]=a;

    }

    if (equal(err, err + 4, arr)){
        for(int i = 0 ; i<4 ; i++){
            cout<<brr[i]<<" ";
        }
    }

    else if (equal(err, err + 4, brr)){
        for(int i = 0 ; i<4 ; i++){
            cout<<arr[i]<<" ";
        }
    }

    else if (equal(err, err + 4, crr)){
        for(int i = 0 ; i<4 ; i++){
            cout<<drr[i]<<" ";
        }
    }

    else if (equal(err, err + 4, drr)){
        for(int i = 0 ; i<4 ; i++){
            cout<<crr[i]<<" ";
        }
    }

    else cout<<-1;

    return 0;
}