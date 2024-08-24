#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int kabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

int isValidDate(int d, int m, int y) {
    if (y < 1 || y > 9999) {
        return 0; 
    }
    if (m < 1 || m > 12) {
        return 0; 
    }
    int maxDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (kabisat(y)) {
        maxDays[2] = 29;
    }
    if (d < 1 || d > maxDays[m]) {
        return 0; 
    }
    return 1; 
}

const char* getNameofDay(int d, int m, int y) {
    if (m < 3) {
        m += 12;
        y -= 1;
    }

    int K = y % 100;
    
    // operasi ini adalah operasi yang di gunakan untuk mencari tahun dari tanggal yang di inputkan
    int J = y / 100;

    //operasi ini adalah operasi yang di gunakan untuk mencari hari dari tanggal yang di inputkan
    int f = d + ((13 * (m + 1)) / 5) + K + (K / 4) + (J / 4) - 2 * J;
    
    // operasi dibawah ini di lakukan karena hasil modulo dari f bisa saja negatif
    int dayOfWeek = (f % 7 + 7) % 7; 

    const char* days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    return days[dayOfWeek];
}

int main() {
    int d, m, y;

    scanf("%d %d %d", &d, &m, &y);

    if (y < 1 || y > 9999) {
        printf("Invalid year\n");
    } else if (m < 1 || m > 12) {
        printf("Invalid month\n");
    } else if (!isValidDate(d, m, y)) {
        printf("Invalid day\n");
    } else {
        printf("%s\n", getNameofDay(d, m, y));
    }

    return 0;
}