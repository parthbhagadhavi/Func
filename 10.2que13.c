#include<stdio.h>
#include<string.h>
void name(char str[]){
int len=strlen(str);
printf("The length of the string:=%d",len);
}

int main(){
  char str[100];
  printf("Enter a string:=");
  gets(str);

  name(str);
}





    