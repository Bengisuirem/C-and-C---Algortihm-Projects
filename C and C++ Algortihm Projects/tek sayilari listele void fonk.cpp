#include <stdio.h>
#include <conio.h>

void teksayilar(int n)
{
	int i=0;
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d\n", i);
		}
		i++;
	}	
}

int main()
{
	int sayi;
	printf("pozitif bir tam sayi girin :");
	scanf("%d",&sayi);
	printf("*******************************\n");
	teksayilar(sayi);
	
	return 0;
}
