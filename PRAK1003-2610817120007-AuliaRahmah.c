#include <stdio.h>

int jumlah_digit(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + jumlah_digit(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Jumlah digit dari %d adalah %d\n", n, jumlah_digit(n));
    return 0;
}