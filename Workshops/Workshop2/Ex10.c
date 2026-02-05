//ATM mo phong: Cho phep nguoi dung rut tien lien tuc cho den khi so du khong du hoac chon thoat.

#include <stdio.h>

int main() {
    int soDu = 1000000;
    int rutTien;
    int luaChon = 1;

    while (luaChon == 1 && soDu > 0) {
        printf("So du hien tai: %d VND\n", soDu);
        printf("Nhap so tien muon rut: ");
		while(scanf("%d", &rutTien)!=1 || rutTien <= 0)
		{
			printf("So tien rut khong hop le! Vui long nhap lai: ");
			while(getchar()!='\n');
		}
        if (rutTien > soDu)
		{
            printf("Khong du so du de rut!\n");
            break;
        }
        else
		{
            soDu -= rutTien;
            printf("Rut tien thanh cong!\n");
        }

        if (soDu > 0) {
            printf("\nBan co muon tiep tuc?\n");
            printf("1. Tiep tuc\n");
            printf("0. Thoat\n");
            printf("Lua chon: ");
			while(scanf("%d",&luaChon)!=1 || luaChon<0)
			{
				printf("Lua chon khong hop le! Vui long chon lai: ");
				while(getchar()!='\n');
			}
        }
    }

    printf("Giao dich ket thuc. So du con lai: %d VND\n", soDu);

    return 0;
}
