#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() 
{
    float number, result;
    
    number = input();
    result = square_root(number);
    output(number, result);
    
    return 0;
}

float input() 
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    return num;
}


float square_root(float n)
 {
    if (n < 0) 
    {
        printf("Cannot calculate square root of a negative number.\n");
        return -1; 
    }

    float x = n;
    float y = 1;

    float epsilon = 0.0001;

    while (x - y > epsilon)
     {
        x = (x + y) / 2;
        y = n / x;
    }

    return x;
}

void output(float n, float sqrroot) 
{
    if (sqrroot != -1)
    {
        printf("Square root of %.2f is approximately %.4f\n", n, sqrroot);
    }
}
