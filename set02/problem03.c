#include <stdio.h>

int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int is_composite(int n) {
    if (n <= 1) 
        return 0;

    int factors = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors++;
            if (factors > 2) 
                return 1;
        }
    }
    return 0;  
}

void output(int n, int result) {
    if (result)
        printf("%d is a composite number.\n", n);
    else
        printf("%d is not a composite number.\n", n);
}

int main() {
    int num = input_number();
    int result = is_composite(num);
    output(num, result);
    return 0;
}
