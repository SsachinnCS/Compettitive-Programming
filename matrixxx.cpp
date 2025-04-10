#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    cin>>i>>j;
    int arr[i][j];

    int c  = 1;
     arr[0][0] = 0;
    for(int a = 0 ;a<i;a++){
        for(int b= 0;b<j;b++){
            arr[a][b]= c;
            c++;
        }
    }

    for(int a = 0 ;a<i;a++){
        for(int b= 0;b<j;b++){
            cout<<arr[a][b]<<" ";
        }
        cout<<endl;
    }

}