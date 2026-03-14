// Dem so Nguyen am trong chuoi
//Khai bao tinh

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Hàm kiểm tra kí tự nguyên âm
int isVowel(char c)
{
	c = tolower(c);
	if(c == 'u' || c == 'e' || c == 'o' || c == 'a' || c == 'i')
	{
		return 1;
	}
	return 0;
}

//Hàm đếm nguyên âm
int countVowels(char str[])
{
	int count = 0;
//	for(int i = 0; i < strlen(str); i++)	//strlen(): tính độ dài mỗi lần lặp --> chưa tối ưu
	for(int i = 0; str[i] != '\0'; i++)		//str[i] != '\0': 
	{
		if(isVowel(str[i]))
		{
			count++;
		}
	}
	return count;
}
int main()
{
	char str[100];
	printf("Moi nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	int count = countVowels(str);
	printf("Chuoi tren co %d nguyen am\n", count);
}
