#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	int a, b=1, c=0, syc1=0, syc2=0;
	float sonuc1, sonuc2;
	for(int i=0;i<4;i++)
	{
		printf("bir sayi girin :\n");
		scanf("%d", &a);
		
		if(a%2==0)
		{
			b*=a;
			syc1++;
		}
		else
		{
			c+=a;
			syc2++;
		}
	}
		sonuc2=(float)c/syc2;
		printf("aritmetik ort=%2.f\n", sonuc2);
		
		sonuc1=(float)pow(b,(double)1/syc1);
		printf("geometrik ort=%2.f\n", sonuc1);
		getch();
		return 0;
		
	
}
