//Nhap vao mot mang, in ra mang dao nguoc: khai bao tinh
#include <stdio.h>

int main()
{
	int n;
	printf("Moi nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		printf("Moi nhap phan tu thu %d:", i+1);
		scanf("%d", &a[i]);
	}
	printf("Mang dao nguoc la: ");
	for(int i = n - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
}
