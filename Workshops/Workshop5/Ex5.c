#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void replaceChar(char *str, char c, char repC)
{
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == c)
		{
			str[i] = repC;
		}
	}
}

int occurencesRep(char *str, char c)
{
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == c)
		{
			count++;
		}
	}
	return count;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	char *str = (char*)malloc(100 * sizeof(char));
	fgets(str, 100, stdin);
	str[strcspn(str, "\n")] = '\0';
	
	char c;
	scanf("%c", &c);
	while(getchar() != '\n');
	
	char repC;
	scanf("%c", &repC);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d\n", occurencesRep(str, c));
	
	replaceChar(str, c, repC);
	printf("%s", str);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
