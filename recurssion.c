#include <stdio.h>
#include <string.h>

// 1. Factorial of a Number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// 2. Fibonacci Sequence (Recursive version)
void printFibonacci(int n) {
    if(n<=1){
        return n
    }
    return printFibonacci(n-1)+printFibonacci(n-2);
}

// 3. Sum of Natural Numbers
int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0;
    return n + sumOfNaturalNumbers(n - 1);
}

// 4. Nth Term of Fibonacci Series
int fibonacci(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 5. Print Numbers from 1 to N
void printNumbers(int n, int current) {
    if (current == n)
        return;
    printf("%d ", current);
    printNumbers(n, current + 1);
}

// 6. Sum of Digits of a Number
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sumOfDigits(n / 10);
}

// 7. Print Numbers from N to 1
void printReverse(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    printReverse(n - 1);
}

// 8. Power of Two Using Recursion
int powerOfTwo(int n) {
    if (n == 0)
        return 1;
    return 2 * powerOfTwo(n - 1);
}

// 9. Count Digits in a Number Using Recursion
int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

// 10. Reverse a String Using Recursion
void reverseString(char str[], int index, int length) {
    if (index >= length / 2)
        return;
    char temp = str[index];
    str[index] = str[length - index - 1];
    str[length - index - 1] = temp;
    reverseString(str, index + 1, length);
}

// 11. Check if a String is a Palindrome Using Recursion
int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}

// 12. Find the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// 13. Binary Search Using Recursion
int binarySearch(int arr[], int start, int end, int key) {
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key);
    return binarySearch(arr, mid + 1, high, key);
}

// Main Function
int main() {
    // Factorial
    printf("Factorial of 5: %d\n", factorial(5));
    
    // Fibonacci Sequence
    printFibonacci(7);
    
    // Sum of Natural Numbers
    printf("Sum of first 10 natural numbers: %d\n", sumOfNaturalNumbers(10));
    
    // Nth Fibonacci Term
    printf("5th Fibonacci term: %d\n", fibonacci(5));
    
    // Print Numbers from 1 to N
    printf("Numbers from 1 to 5: ");
    printNumbers(5);
    printf("\n");
    
    // Sum of Digits
    printf("Sum of digits of 12345: %d\n", sumOfDigits(12345));
    
    // Print Numbers from N to 1
    printf("Numbers from 5 to 1: ");
    printReverse(5);
    printf("\n");
    
    // Power of Two
    printf("2 raised to the power 3: %d\n", powerOfTwo(3));
    
    // Count Digits
    printf("Number of digits in 12345: %d\n", countDigits(12345));
    
    // Reverse String
    char str1[] = "hello";
    reverseString(str1, 0, strlen(str1));
    printf("Reversed string: %s\n", str1);
    
    // Check Palindrome
    char str2[] = "madam";
    if (isPalindrome(str2, 0, strlen(str2) - 1))
        printf("\"%s\" is a palindrome\n", str2);
    else
        printf("\"%s\" is not a palindrome\n", str2);
    
    // GCD
    printf("GCD of 48 and 18: %d\n", gcd(48, 18));
    
    // Binary Search
    int arr[] = {1, 3, 5, 7, 9};
    int index = binarySearch(arr, 0, 4, 5);
    if (index != -1)
        printf("5 found at index %d\n", index);
    else
        printf("5 not found in the array\n");
    
    return 0;
}