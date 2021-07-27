#include <iostream>
using namespace std;
int main()
{
	int n,m,a,b;
	cin>>n;
	cin>>m;
	cin>>a;
	cin>>b;
	if(b>m*a)
		cout<<n*a<<endl;
	else
		if(n%m*a>b&&n%m!=0)
			cout<<(n/m)*b+b<<endl;
		else
			cout<<(n/m)*b+(n%m)*a<<endl;

}