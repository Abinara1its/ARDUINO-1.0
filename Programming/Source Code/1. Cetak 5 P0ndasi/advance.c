#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// ini cara ribetnya
void printPancasila()
{
    const char *pancasila[5] = {
        "Ketuhanan yang Maha Esa",
        "Kemanusiaan yang Adil dan Beradab",
        "Persatuan Indonesia",
        "Kerakyatan yang Dipimpin oleh Hikmat Kebijaksanaan dalam Permusyawaratan/Perwakilan",
        "Keadilan Sosial bagi Seluruh Rakyat Indonesia"};

    // Print each principle
    for (int i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, pancasila[i]);
    }
}

int main()
{

    printPancasila();

    return 0;
}