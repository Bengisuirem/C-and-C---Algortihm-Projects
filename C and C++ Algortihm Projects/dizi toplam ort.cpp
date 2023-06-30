#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int dizi[10], i=0;
	int toplam=0;
	float ort;
	for(;i<10;i++)
	{
		printf("dizinin %d. elemanini girin..:", i+1);
		scanf("%d", dizi[i]);
    }
	toplam=toplam+dizi[i];
	ort=(float)toplam/10;
	printf("%d , %3.2f", toplam, ort);
	getch();
	
}
