#include <stdio.h>
#include <conio.h>

struct ders {
	
	int derskod;
	int vize;
	int final;
	float gecmenotu;
};
struct sahis_bilgileri{
	
	char ad[30];
	char soyad[30];
	int no;
	ders dersler[5];
	
};
	float nothesapla(float x, float y){
	float notort=0;
	
	notort= (x*0.4)+(y*0.6);
	if(notort>=50){
		return printf("gecme notu : %2.f", notort);
	}
	return printf("Kaldiniz.");
}
int main()
{
	sahis_bilgileri ogrenci;
	
	for(int i=0;i<5;i++){
		printf("Ogrenci no :");
		scanf("%d",&ogrenci.no);
		printf("Ogrencinin adi :");
		scanf("%s", ogrenci.ad);
		printf("Soyadi :");
		scanf("%s", ogrenci.soyad);
			for(int j=0;j<5;j++){
				printf("ders kodu :");
				scanf("%d", &ogrenci.dersler[j].derskod);
				printf("vize notu :");
				scanf("%d", &ogrenci.dersler[j].vize);
				printf("final notu :");
				scanf("%d", &ogrenci.dersler[j].final);
				nothesapla(ogrenci.dersler[j].vize, ogrenci.dersler[j].final);
				printf("\n");
			}
	}
	getch();
	return 0;
	
}
