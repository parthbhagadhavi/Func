#include<stdio.h>
#include<string.h>

void my(char str[]){
    printf("The reverse of the given string:=\n");
 int length=strlen(str);
 for(char i=length-1;i>=0;i--){
    printf("%c",str[i]);
 }

}
int main(){
    char str[50];
    printf("Enter a string:=");
    gets(str);
my(str);
}
 