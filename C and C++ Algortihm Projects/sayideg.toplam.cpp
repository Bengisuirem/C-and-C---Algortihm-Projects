#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int basamak(int  sayi)
{
	int i, top=0;
	for(i=0;i<=sayi;i++){
		
		top+=sayi%10;
		sayi-=sayi%10;
		sayi/=10;
		i=0;
	}
	return top;
}
int main()
{
	int sayi;
	printf("bir sayi girin :");
	scanf("%d", &sayi);
	
	printf("sayi degerleri toplami =%d", basamak(sayi));
	
	return 0;
	getch();
}
