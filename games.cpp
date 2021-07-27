#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,count=0;
	int Arr[n][2];
	for(i=0;i<n;i++)
	{
		cin>>Arr[i][0];
		cin>>Arr[i][1];

	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			if(Arr[j][0]==Arr[i][1])
				count++;
	}
	cout<<count<<endl;
	return 0;
}