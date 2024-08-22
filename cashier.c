#include <stdio.h> 
/* ini versi panjangnya 
float hitungTotalBayar(int totalBelanja) {
    float totalBayar;
    
    if (totalBelanja < 100000) {
        totalBayar = totalBelanja; 
    } else if (totalBelanja <= 300000) {
        totalBayar = totalBelanja * 0.9; 
    } else if (totalBelanja <= 500000) {
        totalBayar = totalBelanja * 0.8;
    } else {
        totalBayar = totalBelanja * 0.7;
    }

    return totalBayar;
}
*/

int main() {
    int totalBelanja;
    float totalBayar;
    scanf("%d", &totalBelanja);

    totalBayar = (totalBelanja < 100000) ? totalBelanja :
                 (totalBelanja <= 300000) ? totalBelanja * 0.9 :
                 (totalBelanja <= 500000) ? totalBelanja * 0.8 :
                 totalBelanja * 0.7;

    printf("%.2f", totalBayar);

    return 0;
}
