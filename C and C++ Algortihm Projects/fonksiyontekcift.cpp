#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int tekcift(int a)
{
	if(a%2==0)
		return 1;
	else
		return 0;
}

int main()
{
	int sayi, snc;
	printf("bir sayi girin :");
	scanf("%d",&sayi);
	snc=tekcift(sayi);
	
	if(snc==1)
		printf("sayi cifttir.");
	
	if(snc==0)
		printf("sayi tektir.");
	
	getch();
}
