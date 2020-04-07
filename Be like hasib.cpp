#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void b_search(ll n,ll x)
{
    ll cnt=0;
    
    ll low = 1, high = n;
    while(high>low){
        cnt++;
        ll mid = (low+high)/2;
        if(mid<x){
            low = mid+1;
        }
        else{
            high = mid;
        }
   }
   cout<<cnt<<endl;
}

int main()
{
    ll n,x;
    cin>>n>>x;

    b_search(n,x);
    return 0;
}

    
