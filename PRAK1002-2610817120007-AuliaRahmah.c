#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d\n", fibonacci(i));
        } else {
            printf("%d ", fibonacci(i));
        }
    }
    return 0;
}