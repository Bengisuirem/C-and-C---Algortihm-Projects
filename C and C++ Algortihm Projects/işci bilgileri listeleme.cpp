#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

struct isci_bilgileri{
	char ad[15];
	char soyad[15];
	int yas;
	int aylikucret;
};
struct isci_bilgileri bilgileri_al(){
	setlocale(LC_ALL, "Turkish");
	struct isci_bilgileri sahis;
	printf("isim :");
	gets(sahis.ad);
	printf("soy isim :");
	scanf("%s", sahis.soyad);
	printf("yaþý :");
	scanf("%d", &sahis.yas);
	printf("Aylýk ücret :");
	scanf("%d", &sahis.aylikucret);
	return sahis;
}
void bilgilerigoster(struct isci_bilgileri sahis){
	setlocale(LC_ALL, "Turkish");
	printf("\n");
	printf("ÝÞÇÝ BÝLGÝLERÝ\n");
	printf("isim : %s\n", sahis.ad);
	printf("soy isim : %s\n", sahis.soyad);
	printf("yaþ : %d\n", sahis.yas);
	printf("Aylýk ücret : %d\n", sahis.aylikucret);
}
int main()
{
	struct isci_bilgileri sahis;
	sahis= bilgileri_al();
	bilgilerigoster(sahis);
	
	getch();
	return 0;
}
