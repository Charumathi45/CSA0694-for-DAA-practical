#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n, int i) {
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return isPrime(n, i + 1);
}
void printPrimes(int n, int current) {
    if (current > n)
        return;
    if (isPrime(current, 2))
        printf("%d ", current);
    printPrimes(n, current + 1);
}
int main() {
    int n = 30; 
    printf("Prime numbers up to %d:\n", n);
    printPrimes(n, 2);
    return 0;
}

