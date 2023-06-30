#include <stdio.h>
#include <conio.h>
int main()
{
	
	int a, b;
	printf("iki sayi girin :\n");
	scanf("%d" "%d", &a, &b);
	
	if (a>b){
	printf("a sayisi b'den buyuktur\n");
	printf("a" ">" "b");
	}
	else if (a<b)
	{
	printf("b sayisi a'dan buyuktur\n");
	printf("b" ">" "a");
	}
	else {
		printf("sayilar esittir\n");
		printf("a" "=" "b");
	}
	getch();
	return 0;
}
