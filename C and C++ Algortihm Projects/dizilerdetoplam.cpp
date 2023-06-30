#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int toplam=0, dizi[]={2,4,5,6,8};
	for(int i=0;i<5;i++)
	{
		toplam=toplam+dizi[i];
	}
	printf("toplam=%d", toplam);
	getch();
	
}
