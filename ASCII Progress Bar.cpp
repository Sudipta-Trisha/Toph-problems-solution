#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    double p;
    cin>>p;

    int temp = (int) (p/10.0);
    cout<<"[";
    for(int i=1; i<=temp; i++){
        cout<<"+";
    }

    for(int j=10; j>temp; j--){
        cout<<".";
    }

    cout<<"] "<< ((int) floor(p))<<"%"<<endl;
    return 0;

}
