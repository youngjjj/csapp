#include <stdio.h>
#include <stdlib.h>

void inpalce_swap(int *x,int *y){
	*y=*x ^ *y;
	*x=*x ^ *y;
	*y=*x ^ *y; 	
}

void reverse_array(int a[],int cnt){
	int first,last;
	for(first=0,last=cnt-1;first<last;first++,last--){
		inpalce_swap(&a[first],&a[last]);
	}
}

int main(int argc, char *argv[]) {
	int a[5]={1,2,3,4,5};
	reverse_array(a,5);
	int i;
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	} 
	return 0;
}
