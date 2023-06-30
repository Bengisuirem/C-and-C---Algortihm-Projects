#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c, d, e;
	float f;
	printf("birinci sayiyi girin :\n");
	scanf("%d", &a);
	printf("ikinci sayiyi girin\n");
	scanf("%d", &b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=(float)a/b;
	
	printf("sayilarin toplami=%d\n farki=%d\n carpimi=%d\n bolumu=%d\n", c, d, e, f);
	getch();
	return 0;
	}
