#include<iostream>
using namespace std;
int main()
{
	int level,i;
	cin>>level;
	bool flag[level+1];
	for( i=1;i<=level;++i)
		flag[i]=false;
	int a;
	cin>>a;
	int arra[a];
	for(i=0;i<a;i++)
	{
		cin>>arra[i];
		flag[arra[i]]=true;
	}
	int b;
	cin>>b;
	int arrb[b];
	for(i=0;i<b;i++)
	{
		cin>>arrb[i];
		flag[arrb[i]]=true;
	}
	for(i=1;i<=level;++i)
	{
		if(!flag[i])
		{
			cout<<"Oh, my keyboard!"<<endl;
			return 0;
		}
	}
	cout<<"I become the guy."<<endl;
	return 0;

}