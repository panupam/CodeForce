#include<iostream>
using namespace std;
int main()
{
	int n,v;
	cin>>n;
	cin>>v;
	int deal[n];
	int count=0;
	for(int i=1;i<=n;++i)
	{
		int m,temp;
		bool flag=false;

		cin>>m;
		for(int j=0;j<m;++j)
		{
			cin>>temp;
			if(temp<v)
				flag=true;
		}
		if(flag)
		{
			deal[count]=i;
			++count;
		}
	}
	cout<<count<<endl;
	for(int i=0;i<count;++i)
		cout<<deal[i]<<' ';
	cout<<endl;
	return 0;
}