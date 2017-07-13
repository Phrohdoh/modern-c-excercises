#include <stdio.h>
#include <stdlib.h>

void doit() {
    float x;

    printf("Enter a dollar amount (with 2 decimals): ");
    scanf("%f", &x);

    printf("%.2f with 5%% tax = %.2f\n", x, x * 1.05);
}

int main() {
    doit();
    return 0;
}