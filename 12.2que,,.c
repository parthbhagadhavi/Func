

 #include<stdio.h>
 #include<string.h>
 void my(char str[]){
int length=strlen(str);
for(int i=0;i<length;i++){
char ch=str[i];

     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c ", ch);
        }
}

 }
 int main(){
    char str[100];
    printf("Enter a string:=");
    gets(str);
    my(str);
 }
 