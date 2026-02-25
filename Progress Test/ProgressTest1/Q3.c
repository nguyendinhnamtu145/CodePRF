#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int factorial = 1;
  double S = 0;
  printf("\nINPUT:\n");
  scanf("%d", &n);

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(n > 0)
  {
  	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
		S += (double)1/factorial;
	}
	printf("%.3lf", S);
  }
  else
  {
  	printf("Error: n must be greater than 0");
  }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
