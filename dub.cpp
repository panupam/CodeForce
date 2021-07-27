#include<iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	auto len=a.length();
	string arr[200];
	int j=0,k=0;
	for(auto i=0;i<len;++i)
	{  
		if(a[i]=='W')
		{
			if(a[i+1]=='U'&&a[i+2]=='B')
			{
				arr[j][k]='\0';
				i+=2;
				j++;
				k=0;
				continue;
			}

		}
		arr[j][k]=a[i];
		
		k++;
	}
	arr[j][k]='\0';
	
	for(int i=0;i<=j;++i)

		{
			k=0;
			if(arr[i][0]=='\0')
				continue;
			else
				{
					while(arr[i][k]!='\0')
					{
						cout<<arr[i][k];
						k++;
					}
					cout<<' ';
				}
		}
	return 0;
}