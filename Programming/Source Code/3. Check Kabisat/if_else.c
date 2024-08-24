#include <stdio.h>

int tahun;

int main()
{
    // input tahun
    scanf("%d", &tahun);

    if (tahun < 0 || tahun > 9999){
        // output
        printf("Tahun tidak valid\n");
    }
    else if (tahun % 400 == 0){
        printf("%d merupakan Tahun Kabisat\n", tahun);
    }
    else if (tahun % 100 == 0){
        printf("%d bukan merupakan Tahun Kabisat\n", tahun);
    }
    else if (tahun % 4 == 0){
        printf("%d merupakan Tahun Kabisat\n", tahun);
    }
    else{
        printf("%d bukan merupakan Tahun Kabisat\n", tahun);
    }

}