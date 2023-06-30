#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	char cumle[100];
	char kelime[20];
	char *ptr;
	
	printf("bir cümle yazýn :");
	gets(cumle);
	
	printf("bir kelime yazýn :");
	scanf("%s", kelime);
	
	ptr = strstr(cumle, kelime);
	
	if(ptr=='\0'){
		printf("Eþleþme bulunamadý!");
	}
	else
	printf("baþlangýç noktasý :%d.karakter\n", (ptr - cumle)+1);
	getch();
	return 0;
}
