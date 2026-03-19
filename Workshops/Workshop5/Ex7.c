#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int countOfDigits(char *str)
{
	int countDigits = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(isdigit(str[i]))
		{
			countDigits++;
		}
	}
	return countDigits;
}

int countOfAlphas(char *str)
{
	int countAlphas = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(isalpha(str[i]))
		{
			countAlphas++;
		}
	}
	return countAlphas;
}

int countOfOthers(char *str)
{
	int countOthers = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(!isalpha(str[i]) && !isdigit(str[i]))
		{
			countOthers++;
		}
	}
	return countOthers;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	char *str = (char *) malloc(100 * sizeof(char));
	fgets(str, 100, stdin);
	str[strcspn(str, "\n")] = '\0';

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d\n", countOfDigits(str));
	printf("%d\n", countOfAlphas(str));
	printf("%d", countOfOthers(str));

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
