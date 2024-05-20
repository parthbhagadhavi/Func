#include<stdio.h>
#include<string.h>
void len(char str[]){
int length=strlen(str);
printf("The length of the string:=%d",length);
}

int main(){
  char str[50];
  printf("Enter a string:=");
  gets(str);

  len(str);
}
 