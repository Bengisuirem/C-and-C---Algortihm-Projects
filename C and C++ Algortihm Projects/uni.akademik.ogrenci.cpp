#include <stdio.h>
#include <conio.h>

struct Department{
char name[40];
int academicStaffCount;
int studentCount;
};
struct Faculty{
char name[40];
Department departments[2];
};
struct University{
char name[40];
Faculty faculties[2];
}universities[2];

int main()
{
	for(int i=0;i<2;i++){
		float x=0;
		printf("universite adini giriniz :");
		scanf("%s", universities[i].name);
		for(int j=0;j<2;j++){
			printf("fakulte adini giriniz :");
			scanf("%s", universities[i].faculties[j].name);
			for(int k=0;k<2;k++){
				printf("bolum ismini girin :");
				scanf("%s", universities[i].faculties[j].departments[k].name);
				printf("bolumdeki ogrenci sayisini girin :");
				scanf("%d", &universities[i].faculties[j].departments[k].studentCount);
				printf("bolumdeki akadmeisyen sayisini girin :");
				scanf("%d", &universities[i].faculties[j].departments[k].academicStaffCount);
			}
		}
	x=universities[i].faculties[j].departments[k].academicStaffCount/universities[i].faculties[j].departments[k].studentCount;
	printf("akademisyen basina dusen ogrenci sayisi : %.2f", x)
		
	}
	getch();
	return 0;
}



