#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	int temp=1;
	while(temp<=n)
	{
		if (temp%2==0)
		{
			if(temp%4==0)
			{
				cout<<'#';
				for(int i=0;i<m-1;i++)
					cout<<'.';
				cout<<endl;
				++temp;
				continue;

			}
			for(int i=0;i<m-1;i++)
				cout<<'.';
			cout<<'#'<<endl;
		}
		else
		{
			for(int i=0;i<m;i++)
				cout<<'#';
			cout<<endl;

		}
		++temp;
	}
	return 0;

}
