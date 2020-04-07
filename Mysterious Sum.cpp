#include<bits/stdc++.h>
#define  ll long long int
using namespace std;
int cnt=0;

int main()
{
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;

        cout<<"Case "<<++cnt<<": "<<(a+b)<<abs(a-b)<<endl;
    }
    return 0;
}
