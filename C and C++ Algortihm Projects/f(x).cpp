#include <stdio.h>
#include <conio.h>
int main()
{
	int x,b=0,c,d,f(x);
	printf("bir sayi girin");
	scanf("%d", &x);
	
	if(x<0)
	{
		b=3*((x)^2)-1;
		printf("f(x)=%d",b);
	}
	
	getch();
}
