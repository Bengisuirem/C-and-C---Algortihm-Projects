#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

struct Department{
	char name[40];
	int AcademicStaffCount;
	int StudentCount;
};
struct Faculty{
	char name[50];
	Department departments[2];
};
struct University{
	char name[40];
	Faculty faculties[2];
}universities[2];

int main(){
	setlocale(LC_ALL, "Turkish");
	printf("�niversite ad�n� biti�ik yaz�n�z !\n\n");
	int i, j, k;
	float a=0, o=0, x=0, y=0;
	for(i=0;i<2;i++){
		o=0, a=0;
		printf("�niversite ad� girin :");
		scanf("%s", universities[i].name);
		for(j=0;j<2;j++){
			printf("Fak�lte ad� girin :");
			scanf("%s", &universities[i].faculties[j].name);
			for(k=0;k<2;k++){
				printf("B�l�m ismini girin :");
				scanf("%s", &universities[i].faculties[j].departments[k].name);
				printf("B�l�mdeki ��renci say�s�n� girin :");
				scanf("%d", &universities[i].faculties[j].departments[k].StudentCount);
				o+=universities[i].faculties[j].departments[k].StudentCount;
				printf("B�l�mdeki akademik personel say�s�n� girin :");
				scanf("%d", &universities[i].faculties[j].departments[k].AcademicStaffCount);
				a+=universities[i].faculties[j].departments[k].AcademicStaffCount;
			}
		}
		if(i==0){
			x=o/a;
			printf("\n\n");
		}
		else{
			y=o/a;
			printf("\n\n");
		}
		char uniadi[30];
		int sonuc=0;
		printf("�niversite ad� girin :");
		scanf("%s", uniadi);
		sonuc=strcmp(uniadi,universities[0].name);
		if(sonuc==0)
			printf("Akademik personel ba��na d��en ��renci say�s� : %.2f", x);
		else
			printf("Akademik personel ba��na d��en ��renci say�s� : %.2f", y);
			
			getch();
			return 0;
	}
}







