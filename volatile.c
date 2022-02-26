#include<stdio.h>
int main()
/*{
	int a=1;

	while(a)
	{
		printf("%d",a);
	}

	return 0;
}
*/
	
{
	volatile int a=1;

	while(1)
{
	printf("%d",a);
}
return 0;
}
