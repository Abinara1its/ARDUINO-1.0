#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// jawaban sederhana
int main() {
    double C;

    scanf("%lf", &C);
    
    double R = C * 4.0 / 5.0;
    double K = C + 273.15;
    double F = C * 9.0 / 5.0 + 32.0;
    
    printf("%.2lf\n", R);
    printf("%.2lf\n", K);
    printf("%.2lf\n", F);
    
    return 0;
}