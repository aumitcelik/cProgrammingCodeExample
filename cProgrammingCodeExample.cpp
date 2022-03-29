#include <stdio.h>
int main()
{
	int i,j;
	for(i=6;i>=1;i--)
	{
		for(j=1;j<=i;j++){
			if(j%2 == 0)
			printf("a");
			else
			printf("%d", j);
			}
	printf("\n");	
	}
}
