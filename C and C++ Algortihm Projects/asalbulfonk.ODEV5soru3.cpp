#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int fonk(int sayi)
{
	int i;
	for(i=2;i<sayi;i++){
		if(sayi%i==0)
			return 0;
	}
			return 1;
}
int main()
{
	int a;
	printf("bir sayi girin :");
	scanf("%d",&a);
	if(a!=1 && a!=0){
	
		if(fonk(a)==1)
		printf("sayi asaldir ");
		
		else
		printf("asal degildir ");
	}
		else
		printf("asal degildir");
	getch();
		return 0;
}
