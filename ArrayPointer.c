#include <stdio.h>

int main() {
    char hw[] = "Hello World";
    // The address of the array is as same as the address of the first character
    printf("%s, %c, %d, %d, %d\n", hw, hw[0],&hw, &hw[0], hw);

    return 0;
}