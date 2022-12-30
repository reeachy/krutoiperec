
#include <stdio.h>
#include "sys/time.h"

long long int fibonacci_rec(long long int x) {
    if (x == 1 || x == 2) {
        return 1;
    }
    return fibonacci_rec(x - 1) + fibonacci_rec(x - 2);
}

long long int fibonacci_iter(long long int x) {
    long long int a = 1, b = 1, c;
    if (x <= 2) {
        return 1;
    } else {
        for (long long int i = 3; i <= x; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    long long int x;
    struct timeval tv;
    gettimeofday(&tv, NULL);
    double begin = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    x = fibonacci_iter(100);
    gettimeofday(&tv, NULL);
    double end = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    printf("%f %lld\n", end - begin, x);
    gettimeofday(&tv, NULL);
    begin = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    x = fibonacci_rec(100);
    gettimeofday(&tv, NULL);
    end = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    printf("%f %lld\n", end - begin, x);
    return 0;
}
