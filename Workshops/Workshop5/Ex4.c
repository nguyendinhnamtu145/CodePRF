#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

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
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++){
		if(isspace(str[i])){
			count++;
		}
	}
	printf("%d", count);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
