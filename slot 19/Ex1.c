//Tạo 1 file text "baitap1.txt", ghi một số vào file này
//Đọc nội dung ở file này, in ra màn hình console
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  
  FILE *fp;
  fp = fopen("baitap1.txt", "w");
  
  //Kiem tra thanh cong
  if(fp == NULL)
  {
  	printf("ERROR!");
  	return 0;
  }
  
  int n;
  printf("nhap n: ");
  scanf("%d", &n);
  fprintf(fp, "Gia tri n: %d", n);

  //Dong file
  fclose(fp);
  return 0;
  
  //Doc file
  fp = fopen("baitap1.txt", "r");
  if(fp == NULL)
  {
  	printf("ERROR!");
  	return 0;
  }
  char s;
  do{
  	s = gets(fp); //doc tung ki tu 1 tren file
  	printf("%c", s);
  }while(s != EOF);
  
  fclose(fp);
  return 0;
}
