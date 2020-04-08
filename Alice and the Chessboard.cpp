#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;

        if(abs(r1-r2)==abs(c1-c2))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
