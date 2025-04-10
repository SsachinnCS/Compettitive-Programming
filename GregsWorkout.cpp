#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ch=0,bi=0,b=0;
    for(int i = 1 ; i<=n;i++){
        int a;
        cin>>a;
        if(i%3==1)ch+=a;
        else if(i%3==2)bi+=a;
        else b+=a;
    }

    if(ch>bi && ch>b)cout<<"chest";
    else if(bi>ch && bi>b)cout<<"biceps";
    else cout<<"back";
    return 0;
}