#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int isPalidrome(char *str)
{
	int len = strlen(str);
	for(int i = 0; i < len/2; i++)
	{
		if(str[i] != str[len - 1 - i])
		{
			return 0;
		}
	}
	return 1;
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
	if(isPalidrome(str))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
