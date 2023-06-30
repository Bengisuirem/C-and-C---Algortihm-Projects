#include <stdio.h>
#include <conio.h>
#include <string>

int main()
{   int i, n, snc=0;
    float ort=0;  
	printf("bir sayi girin :");
	scanf("%d", &n);
	 
	 for(i=0;i<=n;i++);
	 {
		snc=snc+i;
		ort=snc/n;
	    
	    
	 }
	 printf("girilen sayiya kadar olan cift sayilarin toplami=%d\n", snc);
	 printf("girilen sayiya kadar olan cift sayilarin ortalamasi=%f\n", ort);
	 getch();
}
