#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int dizi[100];
	srand(time(NULL));
	for(int i=0;i<15;i++)
	{
		dizi[i]=rand()%1000;
		printf("%d\n", dizi[i]);
	}
	getch();
	return 0;
}
