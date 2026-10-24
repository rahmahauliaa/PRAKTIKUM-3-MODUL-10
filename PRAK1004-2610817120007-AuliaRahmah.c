#include <stdio.h>

int hanoi_langkah(int n) {
    if (n == 0) {
        return 0;
    }
    return 2 * hanoi_langkah(n - 1) + 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Jumlah langkah minimum untuk %d cakram adalah %d\n", n, hanoi_langkah(n));
    return 0;
}