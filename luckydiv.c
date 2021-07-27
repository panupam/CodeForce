#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int flag=1;
	while(n>0)
	{
		if(n%10==7||n%10==4)
		{
			n=n/10;
			continue;
			
		}
		else
		{
			flag=0;
			break;
		}
		

	}
	if(flag==1)
		printf("YES");
	else printf("NO");
	return 0;
}