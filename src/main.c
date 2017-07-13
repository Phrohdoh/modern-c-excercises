#include <stdio.h>
#include <stdlib.h>

void doit() {
    char str[BUFSIZ];

    printf("Enter a dollar amount (with 2 decimals): ");
    scanf("%s", str);

    float in = strtof(str, NULL);
    printf("%.2f with 5%% tax = %.2f\n", in, in * 1.05);
}

int main() {
    doit();
    return 0;
}