//Viet chuong trinh nhap vao 2 so nguyen a, b.
//Nhap vao 1 trong 5 phep toan +, -, *, /, %.
//In ket qua.

#include <stdio.h>
int main()
{
	int a, b;
	char phepToan;
	float kq;
	scanf ("%d, %d", &a, &b);
	scanf (" %c", &phepToan);
	switch (phepToan)
	{
		case '+':
			kq = a+b;
			break;
		case '-':
			kq = a-b;
			break;
		case '*':
			kq = a*b;
			break;
		case '/':
			if(b==0)
			{
				printf ("Khong the chia cho 0");
				return 0;
			}
			else 
			{
				kq = (float) a/b;
				printf ("%d %c %d = %.2f", a, phepToan, b, kq); 
				return 0; 
			}
		case '%':	
			if(b==0)
			{
				printf ("Khong the chia cho 0");
				return 0;
			}
			else
			{
				kq = a%b; 
				break;
			}	
		default:
			printf("Nhap sai!");
			return 0;
	}
	printf ("%d %c %d = %.0f", a, phepToan, b, kq); 
	return 0;
}