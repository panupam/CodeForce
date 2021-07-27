#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int Arr[n+1];
	for(int i=1;i<=n;i++)
		cin>>Arr[i];
	int even=0;
	for(int i=1;i<=3;++i)
		if(Arr[i]%2==0)
			even++;

	if(even<2)
	{
		for(int i=1;i<=n;++i)
			if(Arr[i]%2==0)
				cout<<i<<endl;
	}
	else
		for(int i=1;i<=n;++i)
			if(Arr[i]%2==1)
				cout<<i<<endl;
			

}