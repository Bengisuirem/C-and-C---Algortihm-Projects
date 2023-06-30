#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int fonk(int  sayi)
{
	int i=0, top=0;
	while(i<sayi){
		
		top+=sayi%10;
		sayi-=sayi%10;
		sayi/=10;
		
		
	}
	return top;
}
int main()
{
	int sayi;
	printf("bir sayi girin :");
	scanf("%d", &sayi);
	
	printf("sayi degerleri toplami =%d", fonk(sayi));
	
	return 0;
	getch();
}
