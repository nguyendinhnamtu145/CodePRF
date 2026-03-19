#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void reverseStr(char *str, char *revStr)
{
	int len = strlen(str);
	for(int i = 0; i <= len; i++)
	{
		revStr[i] = str[len - 1 - i];
	}
	revStr[len] = '\0';
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	char *str = (char *) malloc(100 * sizeof(char));
	fgets(str, 100, stdin);
	str[strcspn(str, "\n")] = '\0';
	char revStr[100];

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	reverseStr(str, revStr);
	for(int i = 0; revStr[i] != 0; i++)
	{
		printf("%c", revStr[i]);
	}


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
