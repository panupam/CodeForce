#include <stdio.h>
#include <string.h>
int main()
{
	char Arr[101];
	scanf("%s",Arr);
	int len=strlen(Arr);
	int flag=0;

	int i=0;
	while(i<len&&flag==0)
	{
		if(Arr[i]=='h')
		{
			i++;
			while(i<len&&flag==0)
			{
				if(Arr[i]=='e'){
					i++;
					while(i<len&&flag==0)
					{
						if(Arr[i]=='l'){
							i++;
							while(i<len&&flag==0)
							{
								if(Arr[i]=='l')
								{
									i++;
									while(i<len&&flag==0)
									{
										if(Arr[i]=='o')
											flag++;
										i++;
									}

								}
								i++;


							}

						}
					i++;

					}
				}
				i++;
			}
		}
		i++;
	}
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;

}