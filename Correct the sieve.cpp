#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sz 10000000

vector<ll>v;
bool arr[10000000+10];
void sieve()
{
  v.push_back(2);
  for(ll i=4; i<=sz; i+=2 )
    arr[i]=1;
  for(ll i=3; i<=sz; i+=2){
      if(!arr[i]){
        v.push_back(i);
        if(i*i<=sz){
          for(ll j=i*i; j<=sz; j+=i+i){
            arr[j]=1;
          }
        }
      }

    }
  int test;
  cin>>test;
  while(test--){
    ll n;
    cin>>n;
    if(n==1) cout<<n<<" is not a prime number."<<endl;
    else if(arr[n]==0) cout<<n<<" is a prime number."<<endl;
    else cout<<n<<" is not a prime number."<<endl;
  }

}

int main()
{
  sieve();
  return 0;
}
