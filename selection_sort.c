#include<stdio.h>
#include<time.h>
#define SIZE 1000

void swap(int *a,int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;	
}
void selectionSort(int a[],int n){
	int i,j,min_index;
	
	for(i = 0;i < n-1;i++){
		min_index=i;
		
		for(j = i+1;j < n;j++){
			if(a[j] < a[min_index]){
				min_index=j;
			}
			
        if(min_index!=i){
        	swap(&a[min_index],&a[i]);
		}
		}
	}
}
void printsort(int a[],int n){
	int i,j;
	for( i = 0;i < n;i++){
		printf("%d,",a[i]);
	}
}
int main(){
	printf("**********SELECTION_SORT********");
	int i,j,n=SIZE,a[SIZE];
	double start,end;
	start = (double)clock();
	
	for(i = 0;i < n;i++ ){
		a[i]=rand()%100;
	}
	end= (double)clock();
	
    selectionSort(a,n);
	printf("\n");
	printf("sorted array");
	printf("\n");
		printsort(a,n);
		
}
