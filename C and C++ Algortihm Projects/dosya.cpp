#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main(){
		srand(time(NULL));
	
	FILE *dsy;
	FILE *dsy2;
	
		dsy=fopen("sayilar0.txt" ,"w");
		if(dsy==NULL){
		printf("Dosya acilma hatasi./n");
		
		getch();
	    return 0;
    }
		dsy2=fopen("sayilar1.txt","w");
		if(dsy2==NULL){
		printf("Dosya acilma hatasi./n");
		
		getch();
		return 0;
	}
	unsigned char c,e;
	unsigned a=16;
	unsigned b=8;
	unsigned d=4;
	unsigned rst;
	
	for(int i=0; i<100;i++){
	rst= rand()%100;
	
		c= rst|a;
		
		if(rst==c){
			
			d=~d;
			e=rst&d;
		    fprintf(dsy2,"%d\n",e); 
		    
		}
		else{ 
			c=rst | b; 
		    fprintf(dsy,"%d\n",c); 
		}
	}
	printf("Islem tamamlandi.");
	
	fclose(dsy);
	fclose(dsy2);
	getch();
	return 0;
}
