// program to find the maximum subarray sum
// brute force approach
// time complexity: O(n^2)
// space complexity: O(1)

int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += arr[j];
            maxSum = max(maxSum, currentSum);
        }
    }
    return maxSum;
}   

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum subarray sum: %d\n", maxSubarraySum(arr, n));
    return 0;
}

// kadane's algorithm
// time complexity: O(n)
// space complexity: O(1)

int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}   

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum subarray sum: %d\n", maxSubarraySum(arr, n));
    return 0;
}


// program to find the maximum or minimum sum of a subarray of size K
// brute force approach
// time complexity: O(n*k)
// space complexity: O(1)

int maxSumSubarray(int arr[], int n, int k) {
    int maxSum = INT_MIN;
    for (int i = 0; i < n - k + 1; i++) {
        int currentSum = 0;
        for (int j = 0; j < k; j++) {
            currentSum += arr[i + j];
        }
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}   

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printf("Maximum subarray sum: %d\n", maxSumSubarray(arr, n, k));
    return 0;
}

// sliding window technique
// time complexity: O(n)
// space complexity: O(1)
int maxEvenOddSubarray(int arr[], int n) {
    int maxLength = 1;
    for (int i = 0; i < n; i++) {
        int currentLength = 1;
        for (int j = i + 1; j < n; j++) {
            if ((arr[j] % 2 == 0 && arr[j-1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j-1] % 2 == 0)) {
                currentLength++;
                if(maxLength<currentLength) {
                    maxLength=currentLength;
                }
            } else {
                currentLength = 1; // Reset currentLength if the sequence is broken
            }
        }
    }
    return maxLength; // Return the maximum length found
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printf("Maximum subarray sum: %d\n", maxSumSubarray(arr, n, k));
    return 0;
}

// program to find the maximum length even-odd subarray
// brute force approach
// time complexity: O(n^2)
// space complexity: O(1)

int maxEvenOddSubarray(int arr[], int n) {
    int maxLength = 1;
    for (int i = 0; i < n; i++) {
        int currentLength = 1;
        for (int j = i + 1; j < n; j++) {
            if ((arr[j] % 2 == 0 && arr[j-1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j-1] % 2 == 0)) {
                currentLength++;
                maxLength = max(maxLength, currentLength);
            } else {
                currentLength = 1; // Reset currentLength if the sequence is broken
            }
        }
    }
    return maxLength; // Return the maximum length found
}   

int main() {
    int arr[] = {5, 3, 1, 2, 7, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum length even-odd subarray: %d\n", maxEvenOddSubarray(arr, n));
    return 0;
}   

// using kadane's algorithm
// time complexity: O(n)
// space complexity: O(1)

int maxEvenOddSubarray(int arr[], int n) {
    int maxLength = 1;
    int currentLength = 1;
    for (int i = 1; i < n; i++) {
        if ((arr[i - 1] + arr[i]) % 2 != 0) { // extending the same subarray
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 1; // choosing the new subarray
        }
    }
    return maxLength;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum length even-odd subarray: %d\n", maxEvenOddSubarray(arr, n));
    return 0;
}

// Program for Equilibrium index of an array
// brute force approach
// time complexity: O(n^2)
// space complexity: O(1)

int equilibriumIndex(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j < i; j++) 
        {
            leftSum += arr[j];
        }
        for (int j = i + 1; j < n; j++) 
        {
            rightSum += arr[j];
        }
        if (leftSum == rightSum) 
        {
            return i;
        }
    }
    return -1;
}   

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Equilibrium index: %d\n", equilibriumIndex(arr, n));
    return 0;
}

// efficient approach
// time complexity: O(n)
// space complexity: O(1)

int equilibriumIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) totalSum += arr[i];
    int leftSum = 0; 
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];
        if (leftSum == totalSum) return i;
        leftSum += arr[i];
    }
    return -1;
}       

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Equilibrium index: %d\n", equilibriumIndex(arr, n));
    return 0;
}   

// program to sort an array which consists of only 0, 1, and 2 without using sorting
// brute force approach
// time complexity: O(n)
// space complexity: O(1)

void sortArray(int arr[], int n) {
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }
    for (int i = 0; i < count0; i++) arr[i] = 0;
    for (int i = count0; i < count0 + count1; i++) arr[i] = 1;
    for (int i = count0 + count1; i < n; i++) arr[i] = 2;
}

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
    return 0;
}

// efficient approach
// time complexity: O(n)
// space complexity: O(1)
// Function to swap two integers
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortArray(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1) mid++;
        else swap(arr[mid], arr[high--]);
    }
}       

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
    return 0;
}

// Program to find all pairs with a given sum
// brute force approach
// time complexity: O(n^2)
// space complexity: O(1)

void findPairs(int arr[], int n, int sum) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                printf("(%d, %d)\n", arr[j], arr[i]);
            }
        }
    }
}   

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 5;
    findPairs(arr, n, sum);
    return 0;
}   

// optimal approach using two pointers      
// time complexity: O(n)
// space complexity: O(1)

void findPairs(int arr[], int n, int sum) {
    int start = 0, end = n - 1;
    while (start < end) {
        if (arr[start] + arr[end] == sum) {
            printf("(%d, %d)\n", arr[start], arr[end]);
            start++;
            end--;
        } else if (arr[start] + arr[end] < sum) start++;
        else end--;
    }
}   

int main() {    
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 5;
    findPairs(arr, n, sum);
    return 0;
}   

// chocolate distribution problem using sliding window technique
// time complexity: O(n)
// space complexity: O(1)


int minDiff(int arr[], int n, int m) {
    sort(arr, arr + n);
    int minDiff = INT_MAX; int currentDiff = 0;
    for (int i = 0; i < n - m + 1; i++) {
        currentDiff = arr[i + m - 1] - arr[i];  
        minDiff = min(minDiff, currentDiff);
    }
    return minDiff;
} 

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 3;
    printf("Minimum difference: %d\n", minDiff(arr, n, m));
    return 0;
}

