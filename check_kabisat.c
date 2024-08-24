#include <stdio.h>
//ini menggunakan operator ternary...
int main() {
    int tahun;
    
    scanf("%d", &tahun);

    int kabisat = (tahun < 0 || tahun > 9999) ? 0 : 
                     (tahun % 400 == 0) ? 1 : 
                     (tahun % 100 == 0) ? 0 : 
                     (tahun % 4 == 0) ? 1 : 0;

    /* 
    ini merupakan cara sederhana menggunakan if else statement
    if (tahun < 0 || tahun > 9999) {
        kabisat = 0;  // Invalid tahun, not a leap tahun
    } 
    else if (tahun % 400 == 0) {
        kabisat = 1;  // Leap tahun
    } 
    else if (tahun % 100 == 0) {
        kabisat = 0;  // Not a leap tahun
    } 
    else if (tahun % 4 == 0) {
        kabisat = 1;  // Leap tahun
    } 
    else {
        kabisat = 0;  // Not a leap tahun
    }
    */

    printf("%d %s merupakan Tahun Kabisat\n", tahun, kabisat ? "" : "bukan");

    return 0;
}