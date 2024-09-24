#include <stdio.h>
#include <time.h>

// Function prototypes
unsigned long long factorial_iterative(int n);
unsigned long long factorial_recursive(int n);

int main() {
	double start_i,start_r,end_i,end_r;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate factorial using both methods
    start_i = clock();
    unsigned long long ans_i = factorial_iterative(n);
    end_i = clock();
    start_r = clock();
    unsigned long long ans_r = factorial_recursive(n);
    end_r = clock();
    
    // cpu time
    double cpu_time_i = (double)((end_i-start_i)/CLOCKS_PER_SEC);
    double cpu_time_r = (double)((end_r-start_r)/CLOCKS_PER_SEC);
    // Print the results
    printf("Factorial (Iterative method) of %d is: %llu\n and TIME Complexity:%f", n, ans_i,cpu_time_i);
    printf("Factorial (Recursive method) of %d is: %llu\n and TIME Complexity:%f", n, ans_r,cpu_time_r);
    
    return 0;
}

// Iterative method
unsigned long long factorial_iterative(int n) {
	int i;
	
	
    unsigned long long result = 1; // Initialize result
    for ( i = 1; i <= n; i++) {
        result *= i; // Compute factorial
    }
    return result; // Return the result
}

// Recursive method
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1) return 1; // Base case
    return n * factorial_recursive(n - 1); // Recursive call
}

