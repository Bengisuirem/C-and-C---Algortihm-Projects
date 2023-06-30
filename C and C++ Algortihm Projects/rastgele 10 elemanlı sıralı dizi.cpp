#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int dizi[10];
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		dizi[i]=rand()%10;
		printf("%d\n", dizi[i]);
	}
	getch();
	return 0;
}
