#include <stdio.h>
#include <conio.h>

struct kitap{
	
	char ad[30];
	int yil;
	int no;
	float alisfiyati;
	float satisfiyati;
	float kazanc=0;
};
struct kisi{
	
	char ad[30];
	struct kitap ktp;
};
	float kazanc_hesapla(float alisfiyati, float satisfiyati){
	float kazanc=0;
		kazanc=satisfiyati-alisfiyati;
		printf("kazanc :", kazanc);
}
int main(){
	ktp;

for(int i=0;i<5;i++){
	printf("kitap adi yazin :");
	scanf("%s", ktp.ad);
	printf("basim yilini girin :");
	scanf("%d", &ktp.yil);
	printf("no :");
	scanf("%d", &ktp.no);
	printf("alis fiyati :");
	scanf("%f",&alisfiyati);
	printf("satis fiyati :");
	scanf("%f",&satisfiyati);
	kazanc_hesapla(kitap.kazanc);
	printf("\n");
    }
getch();
return 0;
}


