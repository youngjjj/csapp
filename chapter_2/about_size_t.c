#include <stdio.h>

void show_bytes(char *x,int len){
	int i;
	for(i=0;i<len;i++){
		printf("%.2X",x[i]);
	}
	printf("\n");
}

int main(){
	unsigned int a=1;
	unsigned int b=5;
	unsigned int c=a-b;
	printf("c = %d\n",c);
	printf("c>0 ? %d\n",c>0);
	printf("-4>0 ? %d\n",-4>0);
	//���˾����һ�㣬�ǳ�����������c����ȷ�Ľ�� -4; 
	//���Ǳ����������������������Դ� ,������0�ȽϺ󣬱�0��
	//����������c�����Ƕ��٣�
	show_bytes((char *)&a,sizeof(unsigned int));	//sizeof(unsigned int) = 4 ;
	show_bytes((char *)&b,sizeof(unsigned int));
	show_bytes((char *)&c,sizeof(unsigned int));
	
	//a = 01000000
	//b = 05000000
	//c = FFFFFFFCFFFFFFFFFFFFFFFFFFFFFFFF
	//����cΪ��ֵ���� 
	return 0;
}


