#include <stdio.h>

struct _complex 
{
    float real;
    float imaginary;
};

typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main() {
    Complex num1, num2, result;

    num1 = input_complex();
    num2 = input_complex();

    result = add_complex(num1, num2);

    output(num1, num2, result);

    return 0;
}

Complex input_complex() {
    Complex num;
    printf("Enter the real and imaginary parts separated by a space: ");
    scanf("%f %f", &num.real, &num.imaginary);
    return num;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("The sum of %.2f + %.2fi and %.2f + %.2fi is %.2f + %.2fi\n",
           a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}
