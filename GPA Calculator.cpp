#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int cnt=0;

int main()
{
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        float arr[n];
        float sum = 0.0;
        for(int i=0; i<n; i++){
            scanf("%f",&arr[i]);
            sum = sum + arr[i];
        }
        float average = (sum/float(n));
        printf("Case %d: %0.3f\n",++cnt,average);
    }
    return 0;
}
