#include <stdio.h>
int main()
{
	double a,b; //Khai bao 2 bien so thuc a,b
	a = 5; //Khoi tao gia tri a
	b = 10.216; //Khoi tao gia tri b
	double total = a + b;
	printf("a=%.0lf \n",a); //In a= 5
	printf("b=%.3lf \n",b); //In b = 10.216
	printf("Tong cua %.0f + %.3lf la: %.2lf",a,b,total);
	return 0;	
}