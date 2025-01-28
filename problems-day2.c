#include <stdio.h>
#include <math.h>

// Function to check if a number is positive, negative, or zero using if-else
void checkNumber(int num) {
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }
}

// Function to find the largest of three numbers
void largestOfThree(int a, int b, int c) {
    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    printf("The largest number is %d.\n", largest);
}

// Function to check if a year is a leap year
void checkLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}

// Function to check if a character is a vowel or consonant
void checkVowelOrConsonant(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }
}

// Function to check if a triangle is valid based on angles
void checkTriangleValidity(int a, int b, int c) {
    if (a + b + c == 180) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }
}

// Function to check for a vowel or consonant using switch-case
void checkVowelOrConsonantSwitch(char ch) {
    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }
}

// Function to perform unit conversion (cm to m, kg to g)
void unitConversion(float cm, float kg) {
    printf("%.2f cm is %.2f m.\n", cm, cm / 100);
    printf("%.2f kg is %.2f g.\n", kg, kg * 1000);
}

// Function to check for uppercase, lowercase, or special character
void checkCharacterType(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }
}

// Function to find the sum of the first N natural numbers
int sumOfNaturalNumbersBruteForce(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i; // Add each number to the sum
    }
    return sum; // Return the total sum
}
// optimized approach
int sumOfNaturalNumbers(int N) {
    return (N * (N + 1)) / 2;
}

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int sum = 0, original = num, digits = 0;
    while (original != 0) {
        original /= 10;
        digits++;
    }
    original = num;
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, digits);
        original /= 10;
    }
    return sum == num;
}

// Function to calculate the GCD and LCM of two numbers
void gcdAndLcm(int a, int b) {
    int gcd, lcm;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    lcm = (a * b) / gcd;
    printf("GCD of %d and %d is %d, LCM is %d.\n", a, b, gcd, lcm);
}

// Function to find integers a, b such that n = a³ × b, where b is cube-free
void findCubeFree(int n) {
    for (int a = 1; a * a * a <= n; a++) {
        if (n % (a * a * a) == 0) {
            int b = n / (a * a * a);
            printf("n = %d can be expressed as %d^3 * %d\n", n, a, b);
        }
    }
}

// Function to generate all prime numbers between 1 and N
void generatePrimes(int N) {
    for (int num = 2; num <= N; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    // Example usage of the functions
    checkNumber(5);
    largestOfThree(3, 7, 2);
    checkLeapYear(2020);
    checkVowelOrConsonant('a');
    checkTriangleValidity(60, 60, 60);
    checkVowelOrConsonantSwitch('b');
    unitConversion(150, 2);
    checkCharacterType('A');
    printf("Sum of first 5 natural numbers: %d\n", sumOfNaturalNumbers(5));
    printf("Is 7 prime? %d\n", isPrime(7));
    printf("Is 121 a palindrome? %d\n", isPalindrome(121));
    printf("Is 153 an Armstrong number? %d\n", isArmstrong(153));
    gcdAndLcm(12, 15);
    findCubeFree(27);
    printf("Prime numbers between 1 and 20: ");
    generatePrimes(20);
    
    return 0;
}