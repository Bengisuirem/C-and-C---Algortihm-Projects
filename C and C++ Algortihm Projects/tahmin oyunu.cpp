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
		printf("bir say� girin :");
		scanf("%d",&b);
		
		if(a>b)
		printf("daha b�y�k bir say� girin.");
		else if (a<b)
		printf("daha k���k bir say� girin.");
		else{
		
		printf("Do�ru say� girdiniz!");
		break;
	}
	}
	
	
	
	
	
	
	getch();
	return 0;
}
