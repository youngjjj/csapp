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
	//令人惊奇的一点，是程序会输出计算c的正确的结果 -4; 
	//但是编译器并不把它当作负数对待 ,所以与0比较后，比0大
	//我们来看看c到底是多少：
	show_bytes((char *)&a,sizeof(unsigned int));	//sizeof(unsigned int) = 4 ;
	show_bytes((char *)&b,sizeof(unsigned int));
	show_bytes((char *)&c,sizeof(unsigned int));
	
	//a = 01000000
	//b = 05000000
	//c = FFFFFFFCFFFFFFFFFFFFFFFFFFFFFFFF
	//对于c为此值不解 
	return 0;
}


