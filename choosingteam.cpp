#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	cin>>k;
	int y[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>y[i];
		if(y[i]+k<=5)
			count++;
	}
	cout<<count/3<<endl;




}