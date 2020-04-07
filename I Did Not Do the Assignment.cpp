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
}

int main()
{
  sieve();
  ll n;
  cin>>n;
  for(ll i=0; i<v.size(); i++){
    if(v[i]==n){
            cout<<"NO PUNISHMENT"<<endl;
            return 0;
    }
  }
  for(ll i=1; i<=n; i++){
    cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
  }
  return 0;
}
