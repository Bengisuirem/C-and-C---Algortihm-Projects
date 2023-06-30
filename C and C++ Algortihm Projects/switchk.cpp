#include<stdio.h>
#include <locale.h>
#include <conio.h>
int main (){
	setlocale(LC_ALL, "Turkish");
	int isl,tutar;
	int bakiye=1000;
	printf("iþlemler \n 1:para çekme \n 2:para yatýrma\n ");
	printf("hangi iþlemi seçmek istersiniz?\t");
	scanf("%d",&isl);
	switch(isl)
	
{ 

case 1 :
printf("çekilicek tutarý giriniz:");
scanf("%d",&tutar);
if(tutar>bakiye){

printf("geçersiz iþlem");
}
else{

bakiye=bakiye-tutar;
printf("kalan bakiyeniz: %d",bakiye);
}
    break ;
	
	case 2 :
		printf("yatýrýlacak tutarý girin :");
		scanf("%d",&tutar);
		bakiye=(bakiye+tutar);
		printf("yeni bakiyeniz :\t%d",bakiye);
		break;
		
	default : printf("iþlem geçersiz");
		
	
}

	getch();
}
