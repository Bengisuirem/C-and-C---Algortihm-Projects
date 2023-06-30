#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	char isim[30];
	int i;
	printf("isim girin : ");
	gets(isim);
	printf("girdiðiniz isim :\n");
	for(i=0;isim[i]!='\0';i++){
	printf("%c", isim[i]);
    }
	
	getch();
	return 0;
}
