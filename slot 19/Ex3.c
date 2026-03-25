#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	int id;
	char name[30];
	float grade;
}Sinhvien;

int main() {
	FILE *fp;
	fp = fopen("baitap3.txt", "w");
	
	if(fp == NULL)
	{
		printf("ERROR!");
		return 0;
	}
	
	Sinhvien sv;
	printf("Nhap vao thong tin sinh vien:\n");
	printf("Nhap id: ");
	scanf("%d", &sv.id);
	fprintf(fp, "%d\n", sv.id);
	while(getchar() != '\n');
	
	printf("Nhap ten: ");
	fgets(sv.name, sizeof(sv.name), stdin);
	sv.name[strcspn(sv.name, "\n")] = '\0';
	fprintf(fp, "%s\n", sv.name);
	
	printf("Nhap diem: ");
	scanf("%f", &sv.grade);
	fprintf(fp, "%f\n", sv.grade);
	fclose(fp);
	
	fp = fopen("baitap3.txt", "r");
	if(fp == NULL)
	{
		printf("ERROR!");
		return 0;
	}
	
	fprintf(fp, "%d\n%s\n%.2f", sv.id, sv.name, sv.grade);
    fclose(fp);
    
    printf("\nThong tin sinh vien:\n");
    printf("%d\n%s\n%.2f", sv.id, sv.name, sv.grade);
  
	return(0);
}
