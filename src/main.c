#include <stdio.h>

int main() {
    int a, b, c;
    float x, y, z;

    // TODO: Understand why a, b, and c have garbage values while
    //         x, y, and z are _always_ 0.00 (repeating) (macOS 10.12.4, clang-800.0.42.1 x86_64-apple-darwin16.5.0)
    printf("%d %d %d\n", a, b, c);
    printf("%.10f %.10f %.10f\n", x, y, z);

    return 0;
}