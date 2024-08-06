#include <stdio.h>
#include<time.h>
#define SIZE 10  

int main() {
    int n = SIZE, a[SIZE], i, t, j;
    double start,end;
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);  
    }
    start = clock();
    // Bubble Sort
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    end = clock();
    printf("\nThe sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }
    printf("\n");
	  
    double cpu_time = ((double)(start-end))/ CLOCKS_PER_SEC;
    printf("starting time:%lf",start);
    pritnf("ending time:%lf")
    printf("the cpu time:%lf",cpu_time);
    
    return 0;
}

