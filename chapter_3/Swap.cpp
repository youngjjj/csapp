#include <iostream>
using namespace std;
void Swap_1(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void Swap_2(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<x<<y<<endl;
	Swap_1(&x,&y);
	cout<<"Swap_1 : "<<x<<y<<endl;
	Swap_2(x,y);
	cout<<"Swap_2 : "<<x<<y<<endl;
	system("pause");
	return 0;
}
//交换数字的两个不同类型参数的函数
//第一种是以指针作为参数，通过交换两个地址的内容实现交换 
//第二种是引用的方式，直接对参数所对应的实际值进行操作，本质上也是对源地址进行操作 
