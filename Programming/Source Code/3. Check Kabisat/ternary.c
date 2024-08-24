#include <stdio.h>

int main()
{
    int tahun;
    scanf("%d", &tahun);

    // Menggunakan operator ternary untuk menentukan apakah tahun kabisat atau tidak
    int kabisat = (tahun % 400 == 0) ? 1 : (tahun % 100 == 0) ? 0
                                       : (tahun % 4 == 0)     ? 1
                                                              : 0;

    // Menampilkan hasil
    printf("%d%s merupakan Tahun Kabisat\n", tahun, kabisat ? "" : " bukan");

    return 0;
}
