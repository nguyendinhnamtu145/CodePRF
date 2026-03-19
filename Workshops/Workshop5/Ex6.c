#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void sortAscendingStr(char (*str)[100], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(strcmp(str[i], str[j]) > 0)
			{
				char temp[100];
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}
	
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	int n;
	scanf("%d", &n);
	while(getchar() != '\n');
	char name[10][100];
	
	for(int i = 0; i < n; i++)
	{
		fgets(name[i], sizeof(name[i]), stdin);
		name[i][strcspn(name[i], "\n")] = '\0';
	}


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	sortAscendingStr(name, n);
	for(int i = 0; i < n; i++)
	{
		printf("%s\n", name[i]);
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
