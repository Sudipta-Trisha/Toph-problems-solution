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
        if(s[4]=='1' && s[5]=='1' && s[6]=='5'){
                if(s[2]=='1') cout<<"CSE Spring 20"<<s[0]<<s[1]<<endl;
                else if(s[2]=='2') cout<<"CSE Summer 20"<<s[0]<<s[1]<<endl;
                else if(s[2]=='3') cout<<"CSE Autumn 20"<<s[0]<<s[1]<<endl;
        }
        else if(s[4]=='1' && s[5]=='4' && s[6]=='1')
        {
             if(s[2]=='1') cout<<"EEE Spring 20"<<s[0]<<s[1]<<endl;
            else if(s[2]=='2') cout<<"EEE Summer 20"<<s[0]<<s[1]<<endl;
            else if(s[2]=='3') cout<<"EEE Autumn 20"<<s[0]<<s[1]<<endl;
        }
        else if(s[4]=='1' && s[5]=='1' && s[6]=='6')
        {
             if(s[2]=='1') cout<<"BBA Spring 20"<<s[0]<<s[1]<<endl;
            else if(s[2]=='2') cout<<"BBA Summer 20"<<s[0]<<s[1]<<endl;
            else if(s[2]=='3') cout<<"BBA Autumn 20"<<s[0]<<s[1]<<endl;
        }
        else if(s[4]=='1' && s[5]=='1' && s[6]=='7')
        {
             if(s[2]=='1') cout<<"LLB Spring 20"<<s[0]<<s[1]<<endl;
            else if(s[2]=='2') cout<<"LLB Summer 20"<<s[0]<<s[1]<<endl;
            else if(s[2]=='3') cout<<"LLB Autumn 20"<<s[0]<<s[1]<<endl;
        }
        else if(s[4]=='1' && s[5]=='1' && s[6]=='4')
        {
             if(s[2]=='1') cout<<"English Spring 20"<<s[0]<<s[1]<<endl;
            else if(s[2]=='2') cout<<"English Summer 20"<<s[0]<<s[1]<<endl;
            else if(s[2]=='3') cout<<"English Autumn 20"<<s[0]<<s[1]<<endl;
        }
        else if(s[4]=='1' && s[5]=='1' && s[6]=='1')
        {
             if(s[2]=='1') cout<<"Economics Spring 20"<<s[0]<<s[1]<<endl;
            else if(s[2]=='2') cout<<"Economics Summer 20"<<s[0]<<s[1]<<endl;
            else if(s[2]=='3') cout<<"Economics Autumn 20"<<s[0]<<s[1]<<endl;
        }
    }
    return 0;
}
