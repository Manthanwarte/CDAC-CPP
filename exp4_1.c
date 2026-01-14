#include <stdio.h>
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swapping (in main): x = %d, y = %d\n", x, y);

    return 0;
}
