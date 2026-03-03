#include <stdio.h>

//Ham tim so nguyen to
int isPrime(int n)
{
	int flag = 1;
	for(int i = 2; i <= n/2; i++)
	{
		if(i > 2 && i % 2 == 0)
		{
			continue;
		}
		if(n % i == 0)
		{
			flag = 0;
		}
	}
	return flag;
}

int main()
{
	int a, b, check, flag;
	printf("Moi nhap hai so a va b: ");
	do
	{
		check = scanf("%d %d", &a, &b);
		while(getchar() != '\n');
		if(check != 2 || a < 0 || b < 0)
		{
			printf("Nhap sai roi! Moi nhap lai hai so a va b: ");
		}
	}while(check != 2 || a < 0 || b < 0);
	if(a>b)
	{
		int c = a;
		a = b;
		b = c;
	}
	printf("Cac so nguyen to giua %d va %d la: ", a, b);
	for(int i = a; i <= b; i++)
	{
		flag = isPrime(i);
		if(flag == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
