#include<iostream>
using namespace std;

int tadd_ok(int x,int y){
	int sum=x+y;
	int neg_over = x<0 && y<0 && sum>=0;
	int pos_over = x>=0 && y>=0 && sum<0;
	return !neg_over && !pos_over;
}
//函数风格值得学习  
int main(){
	int x,y;
	cin>>x>>y;
	cout<<tadd_ok(x,y);
	system("pause");
}
