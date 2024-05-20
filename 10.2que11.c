#include <stdio.h>

void print(int num1, int num2) {
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
}

int main() {
    int num3, num4;
    printf("Enter two numbers: ");
    scanf("%d %d\n", &num3, &num4);
    print(num3, num4);
    return 0;
}





    