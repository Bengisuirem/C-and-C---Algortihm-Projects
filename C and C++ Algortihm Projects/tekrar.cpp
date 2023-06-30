#include <conio.h>
#include <stdio.h>
int main()
{
	int n, aort, top;
	printf("bir sayi gir :");
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		top=n*(n+1);
		aort=top/n;
	}
	printf("aritmetik ortalama =%d", aort);
	
	getch();
}
