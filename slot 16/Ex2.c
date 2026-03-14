// Dem so Nguyen am trong chuoi
// Su dung con tro + malloc

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>   // thu vien cho malloc, free

// Ham kiem tra ky tu co phai nguyen am
int isVowel(char c)
{
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
    	return 1;
	}
    return 0;
}

// Ham dem nguyen am
int countVowels(char *input)
{
    int count = 0;
    int length = strlen(input);

    for (int i = 0; i < length; i++)
    {
        if (isVowel(*(input + i)))
            count++;
    }

    return count;
}

int main()
{
	// cap phat bo nho cho chuoi (100 ky tu)
	char *s = (char*) malloc(100 * sizeof(char));
	
    if (s == NULL)
    {
        printf("Khong cap phat duoc bo nho\n");
        return 1;
    }

    printf("Nhap 1 chuoi: ");

    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0'; //Xoa ky tu xuong dong: '\0'
    int result = countVowels(s);
    printf("So nguyen am trong chuoi: %d\n", result);
    
	free(s);   // giai phong bo nho
    return 0;
}