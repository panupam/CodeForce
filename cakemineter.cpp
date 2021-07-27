#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cin>>r;
	cin>>c;
	string k[r] ;
	for(int i=0;i<r;i++)
	{
		cin>>k[i];
		//cout<<k[i]<<endl;
	}
	int count1=0,count2=0;
	for(int i=0;i<r;i++)
	{
		bool flag=false;
		for(int j=0;j<c;j++)
			if(k[i][j]=='S')
			{
				count1++;
				flag=true;
				break;
			}
		if(flag)
			continue;
	}
	for(int i=0;i<c;i++)
	{
		bool flag=false;
		for(int j=0;j<r;j++)
			if(k[j][i]=='S')
			{
				count2++;
				flag=true;
				break;
			}
		if(flag)
			continue;
	}
	cout<<(r-count1)*c+count1*(c-count2)<<endl;
	return 0;
}