#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    string a;
    getline(cin,a);
    
    string mirroredTime;
   string firstTwoDigits = a.substr(0, 2);
  if (firstTwoDigits == "11") 
        mirroredTime = "11:11";
    else if (firstTwoDigits == "12") 
        mirroredTime = "12:21";
    else if (firstTwoDigits == "13") 
        mirroredTime = "13:31";
    else if (firstTwoDigits == "14") 
        mirroredTime = "14:41";
    else if (firstTwoDigits == "15") 
        mirroredTime = "15:51";
    else if (firstTwoDigits == "20") 
        mirroredTime = "20:02";
    else if (firstTwoDigits == "21") 
        mirroredTime = "21:12";
    else if (firstTwoDigits == "22") 
        mirroredTime = "22:22";
    else if (firstTwoDigits == "23") 
        mirroredTime = "23:32";
   
    
    return 0;
   
}