#include<stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Turkish");
	int isl,tutar;
	int bakiye=1000;
	printf("iþlemler \n 1:para çekme \n 2:para yatýrma ");
	scanf("%d",&isl);
	switch(isl)
	
{ 

case 1 :
printf("çekilicek tutarý giriniz:");
scanf("%d",&tutar);
if(tutar>bakiye)
print("geçersiz iþlem");

else
bakiye=bakiye-tutar;
printf("kalan bakiyeniz: %d",bakiye);

	break;
	
	
	
	case 2 :
	
	
	
	
	break;
}


	
	
	
	
	
	getch();
}
