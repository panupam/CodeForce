#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	int temp=n/2;
	while(temp>=0)
	{
		if((n-temp)%m==0)
		{
			cout<<n-temp<<endl;
			return 0;
		}
		--temp;
	}
	//if(n%m==)
	cout<<-1<<endl;
	return 0;
}