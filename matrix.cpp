#include<iostream>
using namespace std;
int main()
{
	int Arr[5][5];
	int i,j;
	int temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>Arr[i][j];
			if(Arr[i][j]==1)
				temp=abs(i-2)+abs(j-2);
		}
	}
	cout<<temp<<endl;
	return 0;
}