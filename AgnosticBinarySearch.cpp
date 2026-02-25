#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[] , int i,int j,int x){
    bool isAsc = arr[i]<arr[j];

    while(i<=j){
        int mid = i+(j-i)/2;

        if(isAsc){
            if(arr[mid]==x)return 1;
            else if(arr[mid]<x)i=mid+1;
            else j=mid-1;
        }


        //Des
        else{
            if(arr[mid]==x)return 1;
            else if(arr[mid]<x)j=mid-1;
            else i=mid+1;
        }
    }
    return 0;
}


int main(){

    //int arr[] = { 40, 10, 5, 2, 1 };
    int arr[] = {-1,0,3,5,9,12};
    int x = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, 0, n - 1, x);

    return 0;
}