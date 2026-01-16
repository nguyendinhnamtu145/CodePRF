//Khai bao 3 bien ngay, thang, nam theo dinh dang: 12/1/2025. In ra man hinh 12/01/2025

#include <stdio.h>
int main()
{
	int ngay, thang, nam;
	scanf(" %d/%d/%d", &ngay, &thang, &nam);
	printf("%02d/%02d/%d", ngay, thang, nam);
	return 0;
}