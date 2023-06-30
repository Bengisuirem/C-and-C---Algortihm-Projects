#include <stdio.h>
#include <conio.h>
int main()
{
	int sayi;
	do
	{
		printf("bir sayi girin \n");
		scanf("%d", &sayi);
		printf("iki kati  :%d\n", 2*sayi);
		
	}
	while(sayi>0);
	
	
	getch();
}

