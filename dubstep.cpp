#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int i=0,j=0;
	char arr[201];
	int len=a.length();
	//cout<<n.length()<<endl;
	for(i=0;i<len;++i)
	{
		if(a[i]=='W'&&i<len-2)
		{
			if(a[i+1]=='U'&&a[i+2]=='B')
			{
				arr[j]=';';
				i+=2;
				++j;
				//k=0;
				continue;
			}

		}
		arr[j]=a[i];
		//cout<<j<<endl;
		++j;

	}
	arr[j]='\0';
	j=0;
	while(arr[j]==';')
	++j;
	char temp=' ';

	for(;j<strlen(arr);++j)
	{
		if(temp!=' '&&arr[j]==';')
		{
			cout<<' ';
			temp=' ';

		}else if(arr[j]==';')
		continue;
		else
		{
			cout<<arr[j];
			temp=arr[j];
		}	
	}
	//cout<<"Hello"<<endl;


	//cout<<"Hola"<<endl;
	//cout<<i<<endl;
	return 0;
}