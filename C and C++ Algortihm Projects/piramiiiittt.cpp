#include <stdio.h>
#include <conio.h>
int main()
{
	int i, satir, k, j;
	int yildiz=1;
	int bosluk=satir-1;
	printf("bir sayi girin \n");
	scanf("%d", &satir);
	for(i=0;i<satir;i++)
	{
		for(j=0;j<bosluk;j++)
		printf(" ");
			bosluk--;
		for(k=0;k<yildiz;k++)
		printf("*");
		yildiz=yildiz+2;
		printf("\n");
	}
	getch();
	return 0;
	
}
