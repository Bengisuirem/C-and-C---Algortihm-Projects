#include <stdio.h>
#include <conio.h>
int main()
{
	int kontrol;
	for(int i=2;i<=100;i++){
		kontrol=0;
		for(int j=2;j<=i-1;j++)
		{
			if((i%j)==0)
		kontrol=1;	
		}
		if(kontrol==0)
		printf("%d\n",i);
	}
	getch();
}
