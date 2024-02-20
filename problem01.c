#include <stdio.h>

void input(float *base, float *height);
void find_area(float base, float height, float *area);
void output(float base, float height, float area);


int main() {
    float base, height, area;

    input(&base, &height);

    find_area(base, height, &area);

    output(base, height, area);

    return 0;
}


void input(float *base, float *height) {
    printf("Enter the base of the triangle: ");
    scanf("%f", base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", height);
}

<<<<<<< HEAD
void find_area(float base, float height, float *area) 
{
    *area = 0.5 * base * height;
}

void output(float base, float height, float area)
 {
    printf("Base: %.2f\n", base);
    printf("Height: %.2f\n", height);
    printf("Area: %.2f\n", area);
 }
=======
void find_area(float base, float height, float *area) {
    *area = 0.5 * base * height;
}

void output(float base, float height, float area) {
    printf("Base: %.2f\n", base);
    printf("Height: %.2f\n", height);
    printf("Area: %.2f\n", area);
}
>>>>>>> f28d3dd687e0b7a31773fce8f4304b86b3f77610
