//Nhap n. Kiem tra n<=0, yeu cau nhap tiep.
//Thoat while khi n>o. Tinh sqrt(n)

#include <stdio.h>
#include <math.h>
int main()
{
	float n;
	printf("Nhap n: ");
//	scanf("%f",&n);
	while(scanf("%f",&n)!=1 || n<=0 || n>1000)
	{
		printf("Nhap n: ");
//		scanf("%f",&n);
		fflush(stdin); //C1: Xoa vung dem tranh nhap chu
//		while(getchar()!='\n'); //C2
	}
	printf("Can bac 2 la: %.2f", n, sqrt(n));
	return 0;
}