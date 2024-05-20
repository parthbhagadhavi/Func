#include<stdio.h>
#include<string.h>

void red(char str[]){
    printf("The reverse of the given string:=\n");
 int length=strlen(str);
 for(char i=length-1;i>=0;i--){
    printf("%c",str[i]);
 }

}
int main(){
    char str[100];
    printf("Enter a string:=");
    gets(str);
red(str);
}





    