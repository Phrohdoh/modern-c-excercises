#include <stdio.h>
#include <stdlib.h>

void doit() {
    int mm, dd, yy;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);
    printf("%02d%02d%02d\n", yy, mm, dd);
}

int main() {
    doit();
    return 0;
}