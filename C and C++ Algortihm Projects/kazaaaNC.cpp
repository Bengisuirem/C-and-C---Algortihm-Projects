#include <stdio.h>
#include <conio.h>

struct kitap{
	
	char ad[30];
	int yil;
	int no;
	float fiyat;
	float kazanc;
};
struct Kisi
{
	
	char ad[30];
	struct kitap ktp;
};
int main(){
	Kisi kisi[5];
	float topkazanc=0;
	for(int i=0;i<5;i++){
		
	printf("kisi adi : ");
	scanf("%s",kisi[i].ad);
	printf("kitap adi :");
	scanf("%s",kisi[i].ktp.ad);
	printf("basim yili :");
	scanf("%d", &kisi[i].ktp.yil);
	printf("no :");
	scanf("%d", &kisi[i].ktp.no);
	printf("kitabin fiyati :");
	scanf("%f", &kisi[i].ktp.fiyat);
	topkazanc+=kisi[i].ktp.fiyat;
	}	
	
	printf("\n");
	printf("Toplam kazanc :%2.f", topkazanc);
	getch();
	return 0;
}
