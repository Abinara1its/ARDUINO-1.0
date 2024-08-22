#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, x, i, index = -1;

    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(array[i] == x) {
            index = i;
            break;
        }
    }
    if(index != -1) {
        printf("Angka ditemukan pada index ke-%d\n", index);
    } else {
        printf("Alamak, Angkanya Gaada!\n");
    }

    return 0;
}