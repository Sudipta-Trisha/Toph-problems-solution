#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;

    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<sum<<endl;
}
