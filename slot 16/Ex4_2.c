//Nhap vao mot mang, in ra mang dao nguoc: su dung con tro
#include <stdio.h>

int main()
{
	int n;
	printf("Moi nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int a[n], *p;
	
	int i = 1;
	for(p = a; p < a + n; p++)	//a + n = &a[n] : vi tri a[n]
	{
		printf("Moi nhap phan tu thu %d: ", i++);
		scanf("%d", p);
	}
	
	printf("Mang dao ngguoc la: ");
	for(p = a + n - 1; p >= a; p--)
	{
		printf("%d ", *p);
	}
}
