#include<stdio.h>
#include <locale.h>
#include <conio.h>
int main (){
	setlocale(LC_ALL, "Turkish");
	int isl,tutar;
	int bakiye=1000;
	printf("i�lemler \n 1:para �ekme \n 2:para yat�rma\n ");
	printf("hangi i�lemi se�mek istersiniz?\t");
	scanf("%d",&isl);
	switch(isl)
	
{ 

case 1 :
printf("�ekilicek tutar� giriniz:");
scanf("%d",&tutar);
if(tutar>bakiye){

printf("ge�ersiz i�lem");
}
else{

bakiye=bakiye-tutar;
printf("kalan bakiyeniz: %d",bakiye);
}
    break ;
	
	case 2 :
		printf("yat�r�lacak tutar� girin :");
		scanf("%d",&tutar);
		bakiye=(bakiye+tutar);
		printf("yeni bakiyeniz :\t%d",bakiye);
		break;
		
	default : printf("i�lem ge�ersiz");
		
	
}

	getch();
}
