#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        bool check = false;
        
        vector<int > arr(n-1);
        for(int i=0;i<n-1;i++){
         cin>>arr[i];   
        }
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n-2;i++){
            if(arr[i]==arr[i+1]){
                check = true;
                
            }
            
            int c= arr[0];
            int aa=c/2;
            if(check==true){
                while(n--){
                     cout<<aa;
                }
            }
            if(check == false) {
                int fst = abs(arr[i+1]-arr[i]);
                cout<<fst<<" ";
                for(int i =0;i<n;i++){
                    cout<<arr[i]-fst<<" ";
                    fst = arr[i]-fst;
                }
                cout<<"\n";
            }
        }
        
        
        
    }
}
