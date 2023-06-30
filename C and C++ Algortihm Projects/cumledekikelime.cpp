#include <stdio.h>
#include <conio.h>
int main()
{
	char cumle[100];
	int i=0, syc;
	printf("bir cumle girin :");
	gets(cumle);
	for(i=0;cumle[i]!='\0';i++){
		syc++;
	}
	printf("%d\n", syc);

	printf("cumledeki karakter sayisi : %d", i);
	getch();
	return 0;
}
