#include <stdio.h>

// int main() {
//     int n=4;
//     int num = 1;
//     for(int i=0; i<n; i++){
//         for(int j=1; j<=n; j++){
//             printf("%d", num);
//             printf(" ");
//             num++;
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=1; j<=i+1; j++){
//             printf("*");
//             printf(" ");
    
//         }
//         printf("\n");
//     }
// }

// Inverted triangle

// int main() {
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=1; j<=i+1; j++){
//             printf("%d", i);
//             printf(" ");
    
//         }
//         printf("\n");
//     }
// }

// // #include <stdio.h>

// int main() {
//     int n = 4; // Number of rows
//     for (int i = 1; i <= n; i++) {
//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         // Print stars
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// int main() {
//     int n = 5; // Number of rows
//     for (int i = n; i >= 1; i--) {  // Outer loop for rows
//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         // Print stars
//         for (int j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n"); // Move to the next line
//     }
//     return 0;
// }

// 


// #include <stdio.h>

// int main() {
//     int n = 5; // Number of rows for the top half

//     // Top half of the diamond
//     for (int i = 1; i <= n; i++) {
//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         // Print stars and spaces
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             if (j == 1 || j == 2 * i - 1) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     // Bottom half of the diamond
//     for (int i = n - 1; i >= 1; i--) {
//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         // Print stars and spaces
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             if (j == 1 || j == 2 * i - 1) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n = 5; // Number of rows

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             // Print '*' for the first or last column, or the last row
//             if (j == 1 || j == i || i == n) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars and spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}