#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	short t[n+1];
	int temp[n/3][3];
	for(i=1;i<=n;i++)
		cin>>t[i];
	int j=0,k=0,l=0;
	//int min=n/3-1;
	for(i=1;i<=n;i++)
	{
		if(t[i]==1&&j<n/3)
		{
			temp[j][0]=i;
			++j;
		}
		if(t[i]==2&&k<n/3)
		{
			temp[k][1]=i;
			++k;
		}
		if(t[i]==3&&l<n/3)
		{
			temp[l][2]=i;
			++l;
		}
	}
	//cout<<j<<k<<l<<"hello"<<endl;
	int min=j;
	if(k<min)
		min=k;
	if(l<min)
		min=l;
	cout<<min<<endl;
	for(i=0;i<min;++i)
	{
		cout<<temp[i][0]<<' '<<temp[i][1]<<' '<<temp[i][2]<<endl;
	}
	return 0;


}