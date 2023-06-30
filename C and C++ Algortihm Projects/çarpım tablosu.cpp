#include <stdio.h>
#include <conio.h>
int main()
{
	int s=0;
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			s=i*j;
			printf("%d x %d = %d\n", i, j, s);
		}
		printf("\n");
	}
	getch();
	return 0;
}
