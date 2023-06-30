#include <stdio.h>
#include <conio.h>
int main()
{
	float vize, final, but;
	float sonuc;
	printf("Vize notunuzu girin  :\n");
	scanf("%f", &vize);
	printf("Final notunuzu girin  :\n");
	scanf("%f", &final);
	sonuc=vize*0.4+final*0.6;
	
	if(sonuc>=60){
		printf("Gectiniz!");
	}
	else{
		printf("butunleme notunuzu girin  :\n");
		scanf("%f", &but);
		sonuc=vize*0.4+but*0.6;
			if(sonuc>=60){
				printf("Gectiniz! ");
			}
			else{
				printf("Kaldiniz..");			
			}
	}
	getch();
	
}
