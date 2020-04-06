#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll n;
  cin>>n;
  
  ll fact = 1;
  
  for(ll i=1; i<=n; i++){
    fact = ((fact%10000)*(i%10000))%10000;
  }
  
  cout<<fact<<endl;
}
