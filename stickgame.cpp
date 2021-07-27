#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	bool flag=false;
	while(n>0&&m>0)
	{
		if(flag)
			flag=false;
		else
			flag=true;
		n--;
		m--;
	}
	if(flag)
	{
		cout<<"Akshat"<<endl;
	}
	else
		cout<<"Malvika"<<endl;
	return 0;
}