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
//�������ֵ�������ͬ���Ͳ����ĺ���
//��һ������ָ����Ϊ������ͨ������������ַ������ʵ�ֽ��� 
//�ڶ��������õķ�ʽ��ֱ�ӶԲ�������Ӧ��ʵ��ֵ���в�����������Ҳ�Ƕ�Դ��ַ���в��� 
