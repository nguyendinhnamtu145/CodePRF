//Nhap so nguyen n, su dung while va toan tu %, / de in ra so dao nguoc cua no.

#include <stdio.h>
int main()
{
	int n, kq=0, soDu;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	while(n>0)
	{
		soDu=n%10;
		kq=kq*10+soDu;
		n=n/10;
	}
	printf("So nghich dao la: %d",kq);
	return 0;
}