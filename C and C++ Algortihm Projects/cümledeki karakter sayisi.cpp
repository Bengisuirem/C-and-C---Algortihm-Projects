#include <stdio.h>
#include <conio.h>
int main()
{
	char cumle[100];
	int i=0;
	printf("bir cumle girin :");
	gets(cumle);
	while(cumle[i])
	{
		i++;
	}
	printf("cumledeki karakter sayisi : %d", i);
	getch();
	return 0;
}
