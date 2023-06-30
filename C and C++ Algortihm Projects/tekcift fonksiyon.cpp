#include <stdio.h>
#include <conio.h>

int tekcift(int a)
{
	return a%2;
}
int main()
{
	int n, sonuc;
	printf("bir sayi girin :");
	scanf("%d", &n);
	
	sonuc=tekcift(n);
	if(sonuc==0)
		printf("sayi cifttir.");
	else
		printf("sayi tektir.");

	return 0;
}
