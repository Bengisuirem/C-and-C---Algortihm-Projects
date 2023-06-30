#include <stdio.h>
#include <conio.h>

int top(int a, int b)
{
	return a+b;
}

int main()
{
	int s1,s2;
	printf("2 sayi girin :");
	scanf("%d %d",&s1,&s2);
	printf("sayilarin toplami : %d",top(s1,s2));
	return 0;
}
