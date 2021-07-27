#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	int temp1=n%10;
	int temp2=(n/10)%10;
	//cout<<<<endl;
	//cout<<<<endl;
	if(n<0)
	{
		if(temp1<temp2)
		{
			cout<<n/10<<endl;
			return 0;
		}
		else
		{
			cout<<(n/100)*10+n%10<<endl;
			return 0;
		}
	}
	cout<<n<<endl;
	return 0;
}