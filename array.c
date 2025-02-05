// second largest element in array
#include <stdio.h>

// find second largest element in array
int secondLargest(int arr[], int n) {
    int largest = arr[0]; // initialize largest to first element
    int secondLargest = arr[0]; // initialize second largest to first element
    for (int i = 1; i < n; i++) {
        // check if current element is greater than largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        // check if current element is greater than second largest and less than largest
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}   

int main() {
    int arr[] = {10, 20, 30, 5, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Second Largest Element: %d\n", secondLargest(arr, n));
    return 0;
}

// check if array is sorted
int isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            return 0;
        }
    }
    return 1;
}   

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Array is sorted: %d\n", isSorted(arr, n));
//     return 0;
// }


// reverse an array 
void reverseArray(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     reverseArray(arr, n);
//     // print array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// remove duplicates from sorted array
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n;
    
    int j = 0;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1]) 
        {
            arr[j++] = arr[i];
        }       // if current element is not equal to next element, copy it to the new array

    arr[j++] = arr[n - 1]; // copy last element to the new array
    return j;
}

// int main() {
//     int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     n = removeDuplicates(arr, n);
//     for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//     printf("\n");

//     return 0;
// }

// left rotate an array by d places
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotate(int arr[], int n, int d) {
    d = d % n; // Handle d > n cases
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}


// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int d = 2;

//     leftRotate(arr, n, d);
//     printArray(arr, n);

//     return 0;
// }
// // move zeroes to end
// void moveZeroes(int arr[], int n) {
//     int j = 0;
//     for (int i = 0; i < n; i++) if (arr[i] != 0) arr[j++] = arr[i]; // copy non-zero elements to the front
//     for (int i = j; i < n; i++) arr[i] = 0; // fill remaining elements with zeroes
// }   

// int main() {
//     int arr[] = {0, 1, 0, 3, 12};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     moveZeroes(arr, n);
//     for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//     printf("\n");   
//     return 0;
// }



// // find leaders in an array 
// void findLeaders(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         int j;
//         for (j = i+1; j < n; j++) if (arr[i] <= arr[j]) break; // check if arr[i] is less than any element to its right
//         if (j == n) printf("%d ", arr[i]); // if no element to the right is greater, print arr[i]
//     }
// }

// int main() {
//     int arr[] = {16, 17, 4, 3, 5, 2};   
//     int n = sizeof(arr) / sizeof(arr[0]);
//     findLeaders(arr, n);
//     printf("\n");
//     return 0;
// }

// find maximum difference between two elements such that larger element appears after the smaller element
// int maxDifference(int arr[], int n) {
//     int maxDiff = arr[1] - arr[0];
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] - arr[i] > maxDiff) maxDiff = arr[j] - arr[i];
//         }
//     }
//     return maxDiff;
// }       

// int main() {
//     int arr[] = {2, 3, 10, 6, 4, 8, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Maximum difference: %d\n", maxDifference(arr, n));
//     return 0;
// }   

// // frequency of each element in sorted array
// void frequency(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         int count = 1;
//         while (i < n-1 && arr[i] == arr[i+1]) {// check if current element is equal to next element
//             count++;
//             i++;
//         }
//         printf("%d: %d\n", arr[i], count);
//     }
// }   

// int main() {
//     int arr[] = {1, 1, 2, 2, 2, 3, 3, 3, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     frequency(arr, n);
//     return 0;
// }   