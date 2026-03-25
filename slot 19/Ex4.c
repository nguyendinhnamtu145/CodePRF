#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct SinhVien {
    char id[30];
    char name[30];
    float grade;
};

int main() {
    int n;
    struct SinhVien ds[100];

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
	
	
    for (int i = 0; i < n; i++) {
    	while(getchar() != '\n');
        printf("\nMoi nhap thong tin sv thu %d:\n", i + 1);
        printf("ID: ");
        fgets(ds[i].id, sizeof(ds[i].id), stdin);
        ds[i].id[strcspn(ds[i].id, "\n")] = '\0';
        
        printf("Name: ");
        gets(ds[i].name);
        
        printf("Grade: ");
        scanf("%f", &ds[i].grade);
    }

    FILE *f = fopen("baitap4.txt", "w");
    if (f != NULL) {
        fprintf(f, "%d\n", n);
        for (int i = 0; i < n; i++) {
        	fprintf(f, "\nThong tin sv thu %d:\n", i + 1);
        	fprintf(f, "ID: ");
            fprintf(f, "%s\n", ds[i].id);
            fprintf(f, "Name: ");
            fprintf(f, "%s\n", ds[i].name);
            fprintf(f, "Diem: ");
            fprintf(f, "%.1f\n", ds[i].grade);
        }
        fclose(f);
    }

    printf("\n--- Danh sach sinh vien vua nhap ---\n");
    printf("%-30s %-30s %-30s\n", "ID", "Ho Ten", "Diem");
    for (int i = 0; i < n; i++) {
        printf("%-30s %-30s %-30.1f\n", ds[i].id, ds[i].name, ds[i].grade);
    }

    return 0;
}