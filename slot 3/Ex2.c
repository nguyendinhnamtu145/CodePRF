//2. Khai bao kieu ki tu ten kt, khoi gan gia tri cho bien nay.
//In ra: Gia tri cua bien
//Gia tri thap phan, gia tri hex, gia tri octal
//Kich thuoc kieu du lieu cua bien kt

#include <stdio.h>
int main()
{
	char kt = 'a';
	printf ("%-20s |%-20s |%-20s |%-20s |%-20s |%-20s\n", "Ten bien", "Gia tri", "Dec", "Hex", "Oct", "Size" );
	printf ("%-20s |%-20c |%-20d |%-20x |%-20o |%-20d", "kt" , kt , kt, kt, kt, sizeof(kt) );
	return 0;
}