#include <stdio.h>

void Characters(char *str) {
    int i = 0;
    while (str[i] != NULL) {
        printf("%c ", str[i]);
        i++;
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Characters of the string: ");
    Characters(str);
    return 0;
}






    