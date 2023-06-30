#include <stdio.h>
#include <conio.h>

int obeb(int x, int y)
{
	if(x==y)
		return x;
	if(x>y)
		return obeb(x-y,y);
	else
		return obeb(x,y-x);
		
}

int main()
{
	int sayi1, sayi2;
	printf("birinci sayiyi girin :");
	scanf("%d", &sayi1);
	printf("ikinci sayiyi girin :");
	scanf("%d", &sayi2);

	int sonuc=obeb(sayi1, sayi2);
	printf("obeb(%d, %d)=%d\n", sayi1, sayi2, sonuc);
	getch();
	return 0;
}
