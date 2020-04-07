#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        string s;
        cin>>s;
        int cnt_ball=0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='O'){
                cnt_ball++;
            }
        }
        //cout<<"ball "<<cnt_ball<<endl;
        if(cnt_ball<6){
            if(cnt_ball==1) cout<<cnt_ball<<" BALL"<<endl;
            else cout<<cnt_ball<<" BALLS"<<endl;
        }
        else if(cnt_ball==6) cout<<"1 OVER"<<endl;
        else if(cnt_ball>6){
                int a = cnt_ball/6, b=cnt_ball%6;
                if(b==1 && a==1) cout<<a<<" OVER "<<b<<" BALL"<<endl;
                else if(a==1 && b>1) cout<<a<<" OVER "<<b<<" BALLS"<<endl;
                else if(a>1 && b==1) cout<<a<<" OVERS "<<b<<" BALL"<<endl;
				else if(a>1 && b==0) cout<<a<<" OVERS"<<endl;
                else cout<<a<<" OVERS "<<b<<" BALLS"<<endl;
        }

    }
}
