#include<stdio.h>
#include<time.h>

void insersionSort(int n,int a[]){
	int i,key,index;
	for(i = 1;i < n;i++){
		key = a[i];
		index = i-1;
		while(index >= 0 && a[index]>key){
			a[index+1] = a[index];
			index = index-1;
		}
		a[index+1] = key;
	}
	
	printf("sorted array :");
	for(i = 0;i < n;i++){
		printf("%d,",a[i]);
	}
}

int main(){
 int n = 700;
 int a[n];
 int i;
 double start,end;
 for(i = 0;i < n;i++){
 	 a[i] = i;
 }
 
 start = clock();
 insersionSort(n,a);
 end = clock();
 
 double cpu_time = (double)((end-start)/CLOCKS_PER_SEC);
 
 printf("\n");
 printf("cpu time :%f",cpu_time);
 return 0;
}
