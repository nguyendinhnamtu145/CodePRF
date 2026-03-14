#include <stdio.h>

void inputNum(int *a, int *b, int *c)
{
    printf("Nhap so thu 1: ");
    scanf("%d", a);

    printf("Nhap so thu 2: ");
    scanf("%d", b);

    printf("Nhap so thu 3: ");
    scanf("%d", c);
}

void swap(int *a, int *b, int *c)
{
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    int a, b, c;
    inputNum(&a, &b, &c);
    swap(&a, &b, &c);
    printf("Sau khi swap: %d %d %d", a, b, c);
    return 0;
}