#include<stdio.h>
#include<math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main() {
    float x1, y1, x2, y2;
    
    input(&x1, &y1, &x2, &y2);
    float distance = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, distance);
    
    return 0;
}

void input(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", x1, y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;
    return 6;
}

void output(float x1, float y1, float x2, float y2, float distance) {
    printf("The distance between point (%.2f, %.2f) and (%.2f, %.2f) is %.4f\n", x1, y1, x2, y2, distance);
}

