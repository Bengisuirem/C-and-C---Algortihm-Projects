#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int a,scanf;
	srand(time(NULL));
	a=rand()%100;
		printf("bir say� girin :");
	for(int i=0;true;i++)
	{
		scanf("%d",&scanf);
		
		if(a>scanf)
		printf("daha b�y�k bir say� girin.\n");
		else if (a<scanf)
		printf("daha k���k bir say� girin.\n");
		else
		printf("Do�ru say� girdiniz!");
	
       
       
	}
	getch();
	return 0;
}
