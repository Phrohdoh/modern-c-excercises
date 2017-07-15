#include <stdio.h>
#include <stdlib.h>

void doit() {
    int lang, pub, book, check;

    printf("Enter ISBN: ");
    scanf("%d-%3d-%5d-%d", &lang, &pub, &book, &check);

    printf("Language: %d\n", lang);
    printf("Publisher: %d\n", pub);
    printf("Book: %d\n", book);
    printf("Check digit: %d\n", check);
}

int main() {
    doit();
    return 0;
}