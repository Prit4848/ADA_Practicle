#include<stdio.h>
#include<math.h>
#include<time.h>

unsigned int gcd();
int main(){
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("the ans of %d and %d gcd is:%d",a,b,gcd(a,b));	
}

unsigned int gcd(long int a,long int b){
	long int result = ((a < b)?a:b);
	while(result > 0){
		if(a % result == 0 && b % result == 0){
			break;
		}
		result --;
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
	return result;
}
