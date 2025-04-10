#include<bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int s,n;
    cin>>s>>n;

   pair<int,int> arr[n];



   for(int i = 0 ; i<n ;i++){
    cin>>arr[i].first>>arr[i].second;
   }

cout<<"--------------------------------------------\n";
   for(int i = 0 ; i<n ;i++){
    cout<<arr[i].first<<" "<<arr[i].second<<"\n";
   }
cout<<"--------------------------------------------\n";
    sort(arr,arr+n);
    cout<<"--------------------------------------------\n";


    for(int i = 0 ; i<n ;i++){
    cout<<arr[i].first<<" "<<arr[i].second<<"\n";
   }

//    for(int i = 0 ; i<n ;i++){
//     if(s <= arr[i].first){
//         cout<<"NO\n";
//         return 0;
//     }

//     else{
//         s+=arr[i].second;
        
//     }
//    }
//    cout<<"YES";
    

    return 0;
}