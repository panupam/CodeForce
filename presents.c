#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int Arr[n+1];
	int Out[n+1];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",Arr+i);
		Out[Arr[i]]=i;

	}
	for(int i=1;i<=n;i++)
		printf("%d ",Out[i]);
	return 0;

}