#include <stdio.h>
#include <conio.h>
int der(int a, int b)
{
	if(a>b)
		return 0;
	else if(a<b)
		return 1;
	else
		return 2;

}

int main()
{
	int s1, s2;
	int sonuc;
	printf("iki sayi girin :");
	scanf("%d %d", &s1,&s2);
	sonuc=der(s1,s2);
	
	if (sonuc==0)
		printf("%d > %d",s1,s2);
	else if(sonuc==1)
		printf("%d > %d", s2, s1);
	else
		printf("%d = %d",s1,s2);
	
	return 0;
}
