#include <stdio.h> 

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
