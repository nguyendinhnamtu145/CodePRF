//Viet ham hoan doi hai so nguyen
#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;
	printf("Moi nhap a, b: ");
	scanf("%d%d", &a, &b);
	swap(&a, &b);
	printf("Hai so sau khi hoan doi la: %d	%d", a, b);
}
