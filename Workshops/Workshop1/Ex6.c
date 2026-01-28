//Xếp hạng học thuật tín chỉ Nhập vào điểm chuyên cần (10%), điểm giữa kỳ (30%) và điểm cuối kỳ (60%).
//1.	Tính điểm tổng kết.
//2.	Chuyển từ thang điểm 10 sang thang điểm chữ (A, B, C, D, F).
//3.	Sử dụng if để kiểm tra điều kiện tốt nghiệp: Không có điểm thành phần nào dưới 4.0 và điểm tổng kết chữ khác 'F'.

#include <stdio.h>
int main()
{
	float chuyenCan, giuaKy, cuoiKy;
	char diemChu;
	float tongKet;
	printf("Nhap diem chuyen can, diem giua ky, diem cuoi ky: ");
	int kq = scanf(" %f %f %f",&chuyenCan, &giuaKy, &cuoiKy);
	if (kq != 3 || chuyenCan<0 || chuyenCan>10 || giuaKy<0 || giuaKy>10 || cuoiKy<0 || cuoiKy>10 )
	{
		printf("Nhap sai!");
		return 0;
	}
	else
	{
		tongKet = chuyenCan * 0.1 + giuaKy * 0.3 + cuoiKy * 0.6;
		if (tongKet >= 8.5)
		{
			diemChu = 'A';
		}
		else
		{
			if (tongKet >= 7)
			{
				diemChu = 'B';
			}
			else
			{
				if (tongKet >= 5.5)
				{
					diemChu = 'C';
				}
				else
				{
					if (tongKet >= 4)
					{
						diemChu = 'D';
					}
					else
					{
						diemChu = 'F';
					}
				}
			}
		}
		printf ("Diem tong ket: %.2f \n",tongKet);
		printf ("Diem chu: %c \n", diemChu);
		if (chuyenCan < 4 || giuaKy < 4 || cuoiKy < 4 || diemChu == 'F')
		{
			printf ("Khong du dieu kien tot nghiep \n");
		}
		else
		{
			printf ("Du dieu kien tot nghiep \n");
		}
	return 0;
	}
}