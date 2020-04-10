#include<bits/stdc++.h>
using namespace std;
int main()
{
	int bud,cho,ice;
	cin>>bud>>cho>>ice;
	
	if((bud>=cho) && (bud>=ice))
		cout<<"Chocolate"<<endl;
	else if(bud<=(cho+ice) && (bud<ice))
		cout<<"Chocolate"<<endl;
	else if(bud<cho || bud>=ice)
		cout<<"Ice-cream"<<endl;
	else
		cout<<"Chocolate"<<endl;
	return 0;
}
