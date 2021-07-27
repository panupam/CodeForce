#include<iostream>
using namespace std;
int main()
{
	long long n,k;
	cin>>n;
	cin>>k;
	//cout<<n<<endl;
	//cout<<k<<endl;
	if(k<=n-n/2)
		cout<<2*k-1<<endl;
	else
		cout<<2*(k-n+n/2)<<endl;
}