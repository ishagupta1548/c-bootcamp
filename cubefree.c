#include <stdio.h>
#include <math.h>

// Function to check if a number is cube-free
int is_cube_free(int num) {
    printf("function called\n");
    for (int i = 2; i * i * i <= num; i++) {
        printf("outer loop\n");
        if (num % (i * i * i) == 0) {
            printf("inner loop\n");
            return 0; // Not cube-free
        }
    }
    return 1; // Cube-free
}
// Function to find the largest a such that a^3 divides n
int find_largest_cube_divisor(int n) {
    int a = 2;
    for (int i = 1; i * i * i <= n; i++) {
        if (n % (i * i * i) == 0) {
            a = i;
        }
    }
    return a;
}
int main() {
    int n = is_cube_free(27);
    printf("%d", n);
    // int n;
    // printf("Enter an integer n: ");
    // scanf("%d", &n);

    // int a = find_largest_cube_divisor(n);
    // int b = n / (a * a * a);

    // // Ensure b is cube-free
    // if (is_cube_free(b)) {
    //     printf("n = %d can be expressed as %d^3 * %d where %d is cube-free.\n", n, a, b, b);
    // } else {
    //     printf("Error: b is not cube-free. Check the logic.\n");
    // }

    return 0;
}