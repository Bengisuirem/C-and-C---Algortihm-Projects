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
	
	printf("bir c�mle yaz�n :");
	gets(cumle);
	
	printf("bir kelime yaz�n :");
	scanf("%s", kelime);
	
	ptr = strstr(cumle, kelime);
	
	if(ptr=='\0'){
		printf("E�le�me bulunamad�!");
	}
	else
	printf("ba�lang�� noktas� :%d.karakter\n", (ptr - cumle)+1);
	getch();
	return 0;
}
