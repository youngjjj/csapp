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
//(byte_pointer) &x �ñ��ʽ������һ��ָ��x��ָ�룬
//���Ҹ��߱�������ָ�� unsigned char������ָ��������&x 
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
