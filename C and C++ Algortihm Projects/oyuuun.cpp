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
		printf("bir say� girin :");
	for(int i=0;true;i++)
	{
		scanf("%d",&b);
		
		if(a>b)
		printf("daha b�y�k bir say� girin.\n");
		else if (a<b)
		printf("daha k���k bir say� girin.\n");
		else{
		printf("Do�ru say� girdiniz!");
		break;
       }
       
	}
	getch();
	return 0;
}
