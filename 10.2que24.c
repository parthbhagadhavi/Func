#include<stdio.h>
  int count(int a){
      int sum=1;
     for(int i=1; i<=a;i++){

      sum*=i;
}
return sum;
  }
  int main(){
    int a;
    printf("Enter your number");
    scanf("%d",&a);
  
 
 printf("The factorial of =%d",count(a));
  }





    