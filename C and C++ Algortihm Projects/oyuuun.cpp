#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int a,b;
	srand(time(NULL));
	a=rand()%100;
		printf("bir sayý girin :");
	for(int i=0;true;i++)
	{
		scanf("%d",&b);
		
		if(a>b)
		printf("daha büyük bir sayý girin.\n");
		else if (a<b)
		printf("daha küçük bir sayý girin.\n");
		else{
		printf("Doðru sayý girdiniz!");
		break;
       }
       
	}
	getch();
	return 0;
}
