#include <stdio.h>
#include <conio.h>

struct kitap{
	
	char ad[30];
	int yil;
	int no;
	float fiyat;
	float kazanc;
};
struct kisi{
	
	char ad[30];
	struct kitap ktp;
}   kisi;
int main(){
	
	for(int i=0;i<5;i++){
		kisi.ktp.kazanc=0;
	printf("kisi adi :\n");
	gets(kisi.ad);
	printf("kitap adi :");
	gets(kisi.ktp.ad);
	printf("yil :");
	scanf("%d", &kisi.ktp.yil);
	printf("no :");
	scanf("%d", &kisi.ktp.no);
	printf("kitabin fiyati :");
	scanf("%2.f", &kisi.ktp.fiyat);
	kisi.ktp.kazanc+=kisi.ktp.fiyat;
	}	
	printf("\n");
	printf("Toplam kazanc :%2.f", kazanc);
	getch();
	return 0;
}
