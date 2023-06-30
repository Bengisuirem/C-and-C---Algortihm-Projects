#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct isci {
	char adi[30];
	char soyadi[30];
	int yas;
	int aylikucret;
	
}insan;

int main()
{
	printf("ISCI BILGILERI \n");
	
	printf("isim girin :");
	scanf("%s", insan.adi );
	
	printf("soyad girin :");
	scanf("%s", insan.soyadi );
	
	printf("yas girin :");
	scanf("%d", &insan.yas);
	
	printf("aylik ucret girin :");
	scanf("%d", &insan.aylikucret);
	
	getch();
	return 0;
}
