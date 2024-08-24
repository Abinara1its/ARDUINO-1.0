#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// ada dua pilihan untuk menyelesaikan soal ini, yaitu dengan menggunakan array dan tanpa menggunakan array

// ini cara ribetnya.....
void printPancasila() {
    const char* pancasila[5] = {
        "Ketuhanan yang Maha Esa",
        "Kemanusiaan yang Adil dan Beradab",
        "Persatuan Indonesia",
        "Kerakyatan yang Dipimpin oleh Hikmat Kebijaksanaan dalam Permusyawaratan/Perwakilan",
        "Keadilan Sosial bagi Seluruh Rakyat Indonesia"
    };

    // Print each principle
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, pancasila[i]);
    }
}

// ini cara mudahnya....
int main(){

    printf("1. Ketuhanan yang Maha Esa\n");
    printf("2. Kemanusiaan yang Adil dan Beradab\n");
    printf("3. Persatuan Indonesia\n");
    printf("4. Kerakyatan yang Dipimpin oleh Hikmat Kebijaksanaan dalam Permusyawaratan/Perwakilan\n");
    printf("5. Keadilan Sosial bagi Seluruh Rakyat Indonesia\n");
    printf("\n");

    printPancasila();

    return 0;
}