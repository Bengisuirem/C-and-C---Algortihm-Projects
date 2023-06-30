#include<stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int a,b;
	srand(time(NULL));
	a=rand()%100;
	for(int i=0;true;i++)
	{
		printf("bir sayý girin :");
		scanf("%d",&b);
		
		if(a>b)
		printf("daha büyük bir sayý girin.");
		else if (a<b)
		printf("daha küçük bir sayý girin.");
		else{
		
		printf("Doðru sayý girdiniz!");
		break;
	}
	}
	
	
	
	
	
	
	getch();
	return 0;
}
