#include<iostream>
using namespace std;
int main()
{
	bool alphabet[26];
	int i;
	for(i=0;i<26;i++)
		alphabet[i]=false;
	char temp;
	cin>>temp;
	while(temp!='}')
	{
		cin>>temp;
		if(temp-'a'>=0&&temp-'a'<26)
		{
			alphabet[temp-'a']=true;
		}

	}
	int sum=0;
	for(i=0;i<26;i++)
		if(alphabet[i])
			++sum;

	cout<<sum<<endl;


}