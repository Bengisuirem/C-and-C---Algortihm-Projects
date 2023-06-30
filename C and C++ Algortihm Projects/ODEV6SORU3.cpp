#include <stdio.h>
#include <conio.h>
struct kitap{
	char ad[30];
	int yil;
	int no;
	float fiyat;
	float kazanc;
};
struct Kisi{
	char ad[30];
	struct kitap ktp;
}kisi;

int bilgilerial(struct Kisi x){
	float topkazanc=0;
	for(int i=0;i<5;i++){
		kisi.ktp.kazanc=0;
		printf("kisi adi :");
		scanf("%s", kisi.ad);
		printf("kitap adi :");
		scanf("%s", kisi.ktp.ad);
		printf("basim yili :");
		scanf("%d", &kisi.ktp.yil);
		printf("kitap no :");
		scanf("%d", &kisi.ktp.no);
		printf("kitabin fiyati :");
		scanf("%f",&kisi.ktp.fiyat);
		kisi.ktp.kazanc+=kisi.ktp.fiyat;
		topkazanc+=kisi.ktp.kazanc;
	}
	return printf("toplam kazanc : %.2f",topkazanc);
}
int main(){
	printf("kitap adini girerken lutfen bosluk birakmayin buyuk harfe geciniz !!\n");
	struct Kisi x;
	bilgilerial(x);
	
	getch();
	return 0;
}
