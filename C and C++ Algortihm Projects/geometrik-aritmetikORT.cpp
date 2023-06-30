#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int a, b=0, c=1, cift=0, tek=0;
	float gort=0, aort=0;
	
	for(int i=0;i<4;i++)
	{
		printf("bir sayi girin :\n");
		scanf("%d", &a);
			if(a%2==0)
			{
				b*=a;
				cift++;
			}
			else
			{
				c+=a;
				tek++;
			}
	}
	gort=(float)pow(b,(double) 1/cift);
	printf("geometrik ortalama =%2.f\n", gort);
	
	aort=(float)c/tek;
	printf("aritmetik ortalama=%2.f\n", aort);
	getch();
	return 0;
}
