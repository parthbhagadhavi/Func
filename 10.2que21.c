#include<stdio.h>
 int cou(){
     int sum = 0;
     int a;
     printf("Enter your number:=");
     scanf("%d",&a);
    for(int i = 1; i <= a; i++) {
        sum += i;
        
    }
    printf("%d",sum);
    return sum;
}

  
  int main(){
   cou();
  }
 





    