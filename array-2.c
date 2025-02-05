/ 1. Maximum Consecutive 1's in Binary Array
int maxConsecutiveOnes(int arr[], int n) {
    int maxCount = 0;
    int currentCount = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            currentCount++;
            maxCount = (currentCount > maxCount) ? currentCount : maxCount;
        } else {
            currentCount = 0;
        }
    }
    return maxCount;
}

// 2. Majority Element (Moore's Voting Algorithm)
// Majority element appears more than n/2 times
int findMajorityElement(int arr[], int n) {
    int candidate = arr[0];
    int count = 1;
    
    // Finding candidate
    for(int i = 1; i < n; i++) {
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        }
        else if(arr[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }
    
    // Verifying if candidate is majority element
    count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == candidate) {
            count++;
        }
    }
    
    return (count > n/2) ? candidate : -1;
}

// 3. Maximum Subarray Sum (Kadane's Algorithm)
int maxSubarraySum(int arr[], int n) {
    int maxSoFar = arr[0];
    int currMax = arr[0];
    
    for(int i = 1; i < n; i++) {
        currMax = (arr[i] > currMax + arr[i]) ? arr[i] : currMax + arr[i];
        maxSoFar = (currMax > maxSoFar) ? currMax : maxSoFar;
    }
    
    return maxSoFar;
}

// 4. Maximum/Minimum Sum of Subarray of Size K
int maxSumSubarrayK(int arr[], int n, int k) {
    if(n < k) return -1;
    
    // Compute sum of first window
    int windowSum = 0;
    for(int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    
    int maxSum = windowSum;
    
    // Compute sums of remaining windows
    for(int i = k; i < n; i++) {
        windowSum = windowSum + arr[i] - arr[i-k];
        maxSum = (windowSum > maxSum) ? windowSum : maxSum;
    }
    
    return maxSum;
}

// 5. Subarray with Given Sum (Sliding Window)
void findSubarrayWithSum(int arr[], int n, int sum) {
    int currentSum = arr[0];
    int start = 0;
    
    for(int i = 1; i <= n; i++) {
        // If currentSum exceeds target, remove elements from start
        while(currentSum > sum && start < i-1) {
            currentSum -= arr[start];
            start++;
        }
        
        if(currentSum == sum) {
            printf("Sum found between indexes %d and %d\n", start, i-1);
            return;
        }
        
        if(i < n) {
            currentSum += arr[i];
        }
    }
    
    printf("No subarray found\n");
}

// 6. Maximum Length Even-Odd Subarray
int maxEvenOddSubarray(int arr[], int n) {
    int maxLen = 1;
    int currLen = 1;
    
    for(int i = 1; i < n; i++) {
        if((arr[i] % 2 == 0 && arr[i-1] % 2 != 0) || 
           (arr[i] % 2 != 0 && arr[i-1] % 2 == 0)) {
            currLen++;
            maxLen = (currLen > maxLen) ? currLen : maxLen;
        }
        else {
            currLen = 1;
        }
    }
    
    return maxLen;
}

// 7. Prefix Sum Array Implementation
void buildPrefixSum(int arr[], int n, int prefixSum[]) {
    prefixSum[0] = arr[0];
    
    for(int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
}

// Get sum of subarray from index l to r using prefix sum
int getSubarraySum(int prefixSum[], int l, int r) {
    if(l == 0) return prefixSum[r];
    return prefixSum[r] - prefixSum[l-1];
}

// 8. Equilibrium Point 
// Brute Force Approach - O(n²)
int findEquilibriumBrute(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        
        // Calculate left sum
        for(int j = 0; j < i; j++) {
            leftSum += arr[j];
        }
        
        // Calculate right sum
        for(int j = i+1; j < n; j++) {
            rightSum += arr[j];
        }
        
        if(leftSum == rightSum) {
            return i;
        }
    }
    return -1;
}

// Optimized Approach - O(n)
int findEquilibriumOptimized(int arr[], int n) {
    int totalSum = 0;
    int leftSum = 0;
    
    // Calculate total sum
    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        // Right sum = totalSum - leftSum - current element
        int rightSum = totalSum - leftSum - arr[i];
        
        if(leftSum == rightSum) {
            return i;
        }
        
        leftSum += arr[i];
    }
    
    return -1;
}
