#include<stdio.h>
#include <conio.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "Turkish");
	int a;
	printf("bir sayý girin :");
	scanf("%d", &a);
	for(int i=1;i<=a;i++){
		printf(" ");
			for(int j=1;j<=a;j++){
		
	if (j<=i)
		printf("* ");
	}
	printf("\n");
	
	}
	getch();
}
