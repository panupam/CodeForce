#include<iostream>
using namespace std;
int main()
{
	int s,n;
	cin>>s;
	cin>>n;
	int x[n],y[n],i;
	bool flag[n];
	//cout<<"HELLO"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		cin>>y[i];
		flag[i]=false;
	}
	//for(i=0;i<n;i++)
		
	bool flag2=true;
	while(flag2)
	{
		flag2=false;
		int i=0;
		while(i<n)
		{
			if(!flag[i])
			{
				if(s>x[i])
				{
					s=s+y[i];
					flag2=true;
					flag[i]=true;
					
				}
			}
			++i;
		}
		//cout<<'h';
	}

	for(i=0;i<n;++i)
		{
			if(!flag[i])
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
		cout<<"YES"<<endl;
		return 0;


}