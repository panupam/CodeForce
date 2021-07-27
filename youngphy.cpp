#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int Arr[n][3];
	int result[3]={0,0,0};
	for(int i=0;i<n;++i)
	{
		cin>>Arr[i][0];
		cin>>Arr[i][1];
		cin>>Arr[i][2];
		result[0]=result[0]+Arr[i][0];
		result[1]=result[1]+Arr[i][1];
		result[2]=result[2]+Arr[i][2];

	}
	if(result[0]==0&&result[1]==0&&result[2]==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}