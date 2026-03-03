#include <stdio.h>

//Ham kiem tra nam nhuan
int isLeapYear(int year)
{
	if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
	{
		return 1;
	}
	return 0; 
}

//Ham kiem tra so ngay trong thang
int getDaysInMonth(int month, int year)
{
	switch(month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		{
			return 31;
		}
		case 4: case 6: case 9: case 11: 
		{
			return 30;
		}
		case 2:
			{
										
				if(isLeapYear(year) == 1) 
				{
					return 29;
				}
				else
				{
					return 28;
				}
			}
		default:
		{
			printf("Nhap sai!");
			break;
		}
	}
}

int main()
{
	int month, year;
	printf("Moi nhap thang va nam: ");
	while(scanf("%d %d", &month, &year) != 2 || month < 1 || month > 12 || year < 0)
	{
		printf("Nhap sai! Moi nhap lai: ");
		while(getchar() != '\n');
	}
	
	int days = getDaysInMonth(month, year);
	printf("Thang %d nam %d co %d ngay\n", month, year, days);
	
	if(month == 2)
	{
		if(isLeapYear(year))
		{
			printf("Nam %d la nam nhuan\n", year);
		}
		else
		{
			printf("Nam %d khong la nam nhuan\n", year);
		}
	}
	return 0;
}
