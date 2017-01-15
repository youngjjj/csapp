#include <stdio.h>
#include <stdlib.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,int len){
	int i;
	for(i=0;i<len;i++){
		printf("%.2X",start[i]);
	}
	printf("\n");
}

void show_int(int x){
	show_bytes((byte_pointer) &x,sizeof(int));
}
//(byte_pointer) &x 该表达式创建了一个指向x的指针，
//并且告诉编译器以指向 unsigned char的类型指针来看待&x 
void show_float(float x){
	show_bytes((byte_pointer) &x,sizeof(float));
}
void show_void(void *x){
	show_bytes((byte_pointer) &x,sizeof(void *));
} 
int main(int argc, char *argv[]) {
	show_int(12345);
	show_float(12345);
	return 0;
}
