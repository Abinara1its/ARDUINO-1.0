#include <stdio.h>
//simple seperti ini
int main() {
    char s[101]; 
    int i, j, len = 0;

    scanf("%s", s);

    while (s[len] != '\0') {
        len++;
    }

    for (i = 0; i < len; i++) {
        for (j = 0; j < len - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c", s[j]);
        }
        printf("\n");
    }

    return 0;
}
