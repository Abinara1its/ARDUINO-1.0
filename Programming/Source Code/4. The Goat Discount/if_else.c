#include <stdio.h>

int main() {

    float totalBayar;
    int totalBelanja;

    scanf("%d", &totalBelanja);
    
    if (totalBelanja < 100000) {
        totalBayar = totalBelanja;
        printf("%.2f", totalBayar);
    } 
    else if (totalBelanja <= 300000) {
        totalBayar = totalBelanja * 0.9;
        printf("%.2f", totalBayar);
    } 
    else if (totalBelanja <= 500000) {
        totalBayar = totalBelanja * 0.8;
        printf("%.2f", totalBayar);
    } 
    else {
        totalBayar = totalBelanja * 0.7;
        printf("%.2f", totalBayar);
    }

    return 0;
}