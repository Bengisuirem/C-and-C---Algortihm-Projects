#include <stdio.h>
#include <conio.h>
#include <string>

int main()
{   int i, n, a, snc=0;
    float ort=0;  
	printf("bir sayi girin :");
	scanf("%d", &n);
	 
	 for(i=0;i<=n;i++)
	{
		  a=(n-2)/2+1;
	      snc=a*(a+1);
	      ort=snc/a;
	 	  
	    
	 }
	 printf("girilen sayiya kadar olan cift sayilarin toplami=%d\n", snc);
	 printf("girilen sayiya kadar olan cift sayilarin ortalamasi=%2.f\n", ort);
	 getch();
}
