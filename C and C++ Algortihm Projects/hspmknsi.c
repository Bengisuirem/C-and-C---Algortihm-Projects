#include <stdio.h>
 
#include <stdlib.h>
 
 
 
int main()
 
{
 
printf("HESAP MAKINESINE HOSGELDINIZ..\n");
 
printf("Yapmak istediginiz islemi seciniz..");
 
printf("Toplama yapmak istiyorsaniz + tusuna basiniz\n");
 
printf("Cikarma yapmak istiyorsaniz - tusuna basiniz..\n");
 
printf("Carpma islemi yapmak istiyorsaniz * tusunaa basiniz..");
 
printf("\nBolme islemi yapmak istiyorsaniz / tusuna basiniz...");
 
char islem;
 
float a,b,sonuc;
 
scanf("%c",&islem);
 
printf("iki sayi giriniz:");
 
scanf("%f %f",&a,&b);
 
switch (islem)
 
{
 
case '+': printf("Toplama islemini sectiniz..\n");
 
printf("%.2f+%.2f=%.2f",a,b,a+b);
 
break;
 
case '-': printf ("Cikarma islemini sectiniz...\n");
 
printf("%.2f-%.2f=%.2f",a,b,a-b);
 
break;
 
case '*': printf ("Carpma islemini sectiniz...\n");
 
printf("%.2f*%.2f=%.2f",a,b,a*b);
 
break;
 
case '/': printf ("Bolme islemini sectiniz...\n");
 
printf("%.2f/%.2f=%.2f",a,b,a/b);
 
break;
}
 
 
 
 
