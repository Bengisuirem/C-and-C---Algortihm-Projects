#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	char cumle[100];
	int i, sayac=0;
	printf("bir c�mle yaz�n :");
	gets(cumle);
	for(i=0;cumle[i]!='\0';i++){
		if(cumle[i]==32){
			sayac++;
		}
		
	}
	printf("c�mledeki kelime say�s� :%d", sayac+1);
	getch();
	return 0;
	
}
