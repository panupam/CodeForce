#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i, Arr[n],max,min,maxi=0,mini=0;
	cin>>Arr[0]; 
	max=Arr[0];
	min=Arr[0];
	for(i=1;i<n;i++)
	{
		cin>>Arr[i];
		if(Arr[i]>max)
		{
			max=Arr[i];
			maxi=i;
		}
		if(Arr[i]<=min)
		{
			min=Arr[i];
			mini=i;
		}
	}
	if(maxi-mini>0)
		cout<<maxi+n-mini-2<<endl;
	else
		cout<<maxi+n-mini-1<<endl;
	return 0;
}