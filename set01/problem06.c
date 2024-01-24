#include <stdio.h>


int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main() {
    int num1, num2, num3, largest;

    input(&num1, &num2, &num3);

    compare(num1, num2, num3, &largest);

    output(num1, num2, num3, largest);

    return 0;
}

int input(int *a, int *b, int *c) {
    printf("Enter three numbers: ");
    scanf("%d %d %d", a, b, c);
    return 0;
}

void compare(int a, int b, int c, int *largest) {
    *largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

void output(int a, int b, int c, int largest) {
    printf("The largest number among %d, %d, and %d is: %d\n", a, b, c, largest);
}
