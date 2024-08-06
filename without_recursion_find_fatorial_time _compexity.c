#include<stdio.h>
#include<math.h>
#include<time.h>




int factorial(int a);

int main() {
    long int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
  
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int ans = factorial(n);
    printf("Factorial of given number is: %d\n", ans);
    
    return 0;
}


int factorial(int a) {
    long int fact = 1; 
    long int i,n;
    clock_t time_req;
    time_req = clock();
    for (i = 0; i < 200000; i++) {
        n = log(i * i * i * i);
    }
     time_req = clock() - time_req;
     printf("Processor time taken for multiplication: %f "
           "seconds\n",
           (float)time_req / CLOCKS_PER_SEC);
    for (i = 1; i <= a; i++) { 
        fact *= i;
    }
    return fact;
}

