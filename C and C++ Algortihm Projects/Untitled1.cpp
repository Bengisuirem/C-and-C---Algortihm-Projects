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

kisi insan;
kitap adam;

for(int i=0;i<5;i++){
	printf("adiniz :");
	scanf("%s", insan.ad);
	printf("kitap adi yazin :");
	scanf("%s", adam.ad);
	printf("basim yilini girin :");
	scanf("%d", &adam.yil);
	printf("no :");
	scanf("%d", &adam.no);
	printf("alis fiyati :");
	scanf("%2.f",&alisfiyati);
	printf("satis fiyati :");
	scanf("%2.f",&satisfiyati);
	kazanc_hesapla(k.kazanc);
	printf("\n");
    }
getch();
return 0;
}


