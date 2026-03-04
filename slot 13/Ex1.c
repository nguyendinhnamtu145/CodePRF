#include<stdio.h>
void doubleX(int x)
{
	x = x + x;	
}

void doubleX2(int *p)
{
	*p = *p + *p;
}

void inputArr(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Moi nhap so thu %d: ", i+1);
		while(scanf("%d", &a[i]) != 1 || a[i] < 0)
		{
			printf("Nhap sai roi! Moi nhap lai: ");
			while(getchar() != '\n');
		}
	}
}

void outputArr(int a[],int n)
{
	printf("Cac phan tu cua mang: ");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int isPrime(int n)
{
	int flag = 1;
	for(int i = 2; i <= n/2; i++)
	{
		if(n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int countPrimes(int a[],int n)
{
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		//flag = isPrime(a[i])
		if(isPrime(a[i]))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n;
	printf("Moi nhap n: ");
	while(scanf("%d", &n) != 1 || n < 1)
	{
		printf("Nhap sai roi! Moi nhap lai n: ");
		while(getchar() != '\n');
	}
	int a[n];
	inputArr(a,n);
	outputArr(a,n);
	printf("Mang co %d so nguyen to",countPrimes(a, n));
	
	
//	int x = 10;
//	doubleX2(&x);
//	printf("Gia tri x= %d: ", x);
	/*
	int *p;
	p = &x; //con tro tên p trỏ đến
	printf("Dia chi duoc chua %u ",p);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);
	
	//x = x + x;
	*p = (*p) + (*p);
	printf("\nGia tri cua x la: %d",x);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);

	//p trỏ đến y
	int y = 5;
	p = &y; //p trỏ đến y
	printf("\nDia chi duoc chua %u ",p);
	printf("\nGia tri cua vung nho ma p tro den: %d",*p);
	*p = *p + x;
	printf("\nGia tri cua y la: %d",y);
	
	*/
	return 0;
}