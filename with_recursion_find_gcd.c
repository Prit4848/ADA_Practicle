#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>


unsigned int gcd(long int a, long int b);

int main() {
    long int a, b;
    
    printf("Enter a: ");
    scanf("%ld", &a); 
    printf("Enter b: ");
    scanf("%ld", &b);
    
    
    unsigned int result = gcd(a, b);
    
    printf("The GCD of %ld and %ld is: %u\n", a, b, result); 
    return 0;
}


unsigned int gcd(long int a, long int b) {
    a = abs(a); 
    b = abs(b); 
    
    
    if (a == 0) {
        return b; 
    }
    if (b == 0) {
        return a; 
    }
    
    
    if (a > b) {
        return gcd(a - b, b);
    }
    
    int i,n;
	clock_t time_req;
    time_req = clock();
    for (i = 0; i < 200000; i++) {
        n = log(i * i * i * i);
    }
     time_req = clock() - time_req;
     printf("Processor time taken for gcd: %f "
           "seconds\n",
           (float)time_req / CLOCKS_PER_SEC);
           
    return gcd(a, b - a);
}

